// LojaDeItens.cpp

#include "LojaDeItens.hpp"
#include <iostream>

LojaDeItens::LojaDeItens(Player* player) : _player(player) {}

void LojaDeItens::adicionarItem(int id, std::string nome, double preco, bool status)
{
    Item* novoItem = new Item(id, nome, preco, status);
    _itens[id] = novoItem;
}

void LojaDeItens::removerItem(int id)
{
    auto it = _itens.find(id);
    if (it != _itens.end())
    {
        delete it->second;
        _itens.erase(it);
    }
}

void LojaDeItens::alterarPrecoItem(int id, double novoPreco)
{
    auto it = _itens.find(id);
    if (it != _itens.end())
    {
        it->second->changePrice(novoPreco);
    }
}

void LojaDeItens::alterarStatusItem(int id)
{
    auto it = _itens.find(id);
    if (it != _itens.end())
    {
        it->second->changeStatus();
    }
}

void LojaDeItens::exibirItens()
{
    for (const auto& pair : _itens)
    {
        std::cout << "ID: " << pair.first << ", Nome: " << pair.second->getName()
                  << ", Preço: " << pair.second->getUnitaryPrice()
                  << ", Status: " << (pair.second->getStatus() ? "Ativo" : "Inativo") << std::endl;
    }
}

void LojaDeItens::comprarItem(int id)
{
    auto it = _itens.find(id);
    if (it != _itens.end() && it->second->getStatus())
    {
        float itemPrice = it->second->getUnitaryPrice();

        if (_player->getMoney() >= itemPrice)
        {
            _player->removeMoney(itemPrice);
            _player->getInventory()->insert(id, *it->second);
            std::cout << "Item comprado: " << it->second->getName() << std::endl;
        }
        else
        {
            std::cout << "Dinheiro insuficiente para comprar o item." << std::endl;
        }
    }
    else
    {
        std::cout << "Item não disponível para compra." << std::endl;
    }
}

void LojaDeItens::venderItem(int id)
{
    auto it = _itens.find(id);
    if (it != _itens.end() && it->second->getStatus())
    {
        if (_player->getInventory()->hasItem(id, 1))
        {
            _player->addMoney(it->second->getUnitaryPrice());
            _player->getInventory()->remove(id, 1);
            std::cout << "Item vendido: " << it->second->getName() << std::endl;
        }
        else
        {
            std::cout << "Item não disponível para venda no inventário." << std::endl;
        }
    }
    else
    {
        std::cout << "Item não disponível para venda." << std::endl;
    }
}

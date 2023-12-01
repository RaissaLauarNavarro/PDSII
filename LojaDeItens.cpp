#include "LojaDeItens.hpp"
#include <iostream>

LojaDeItens::LojaDeItens()
{
    // Construtor vazio por enquanto
}

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
        delete it->second; // Liberar a memória alocada para o item
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
        std::cout << "Item comprado: " << it->second->getName() << std::endl;
        // Implemente a lógica de compra, se necessário
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
        std::cout << "Item vendido: " << it->second->getName() << std::endl;
        // Implemente a lógica de venda, se necessário
    }
    else
    {
        std::cout << "Item não disponível para venda." << std::endl;
    }
}

#pragma once
#include "LojaDeItens.hpp"
#include <iostream>

LojaDeItens::LojaDeItens(Player* player, Inventory* inventory, std::vector<Item>* items) 
    : _player(player), _inventory(inventory), _items(items) {}

void LojaDeItens::exibirItens()
{
    std::cout << "Itens da Loja:\n";
    for (const auto& item : *_items) {
        std::cout << item._id << " - " << item._name << " - $" << item._price << "\n";
    }
    std::cout << "\n";

    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1. Comprar Item" << std::endl;
    std::cout << "2. Vender Item" << std::endl;

    int opcao;
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
        comprarItem();
        break;
    case 2:
        venderItem();
        break;
    default:
        std::cout << "Opção inválida!" << std::endl;
    }
}

void LojaDeItens::comprarItem()
{
    _inventory->list(); // Chama a função list do inventário para exibir os itens
    // Adicione lógica para compra de item aqui

    //Jogador deve escolher um item
    int escolha;
    std::cout << "Escolha um item para comprar: ";
    std::cin >> escolha;
    
     if (escolha >= 0 && escolha < _items.size()) {
        Item itemComprado = (*_items)[escolha];

        // Verificar se o jogador tem dinheiro suficiente
        if (_player->_money >= itemComprado._price) {
            // Adicionar item ao inventário do jogador
            _player->inventory.insert(itemComprado);
            // Remover dinheiro do jogador
            _player->_money -= itemComprado._price;

            std::cout << "Você comprou " << itemComprado._name << " por $" << itemComprado._price << "\n\n";
        } else {
            std::cout << "Dinheiro insuficiente!\n\n";
        }
    } else {
        std::cout << "Escolha inválida!\n\n";
         return comprarItem();
    }
}
}

void LojaDeItens::venderItem()
{
    _inventory->list(); // Chama a função list do inventário para exibir os itens
    // Adicione lógica para venda de item aqui
       int escolha;
    std::cout << "Escolha um item para vender: ";
    std::cin >> escolha;
    
     if (escolha >= 0 && escolha < _player->inventory.size()) {
        Item itemVendido = _player->inventory[escolha];

        //Adicionar os itens à loja
         _items->push_back(itemVendido);

         //Adicionar dinheiro ao jogador
         _player->_money += itemVendido._price;

         //Removendo item do inventário do jogador
         _player->inventory.remove(_player->inventory.begin() + escolha);

        std::cout << "Você vendeu seu item" << itemVendido._name << " por $" << itemVendido._price << " \n\n ";
     } else {
        std::cout << "Escolha inválida!\n\n";
         return venderItem();
     }
}


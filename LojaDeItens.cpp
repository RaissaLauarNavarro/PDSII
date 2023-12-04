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
}

void LojaDeItens::venderItem()
{
    _inventory->list(); // Chama a função list do inventário para exibir os itens
    // Adicione lógica para venda de item aqui
}

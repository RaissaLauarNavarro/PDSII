#include "LojaDeItens.hpp"
#include <iostream>

LojaDeItens::LojaDeItens(Player* player, Inventory* inventory) : _player(player), _inventory(inventory) {}

void LojaDeItens::exibirItens()
{
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1. Comprar Item" << std::endl;
    std::cout << "2. Vender Item" << std::endl;

    int opcao;
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
        _inventory->list(); // Chama a função list do inventário para exibir os itens
        break;
    case 2:
        _inventory->list(); // Chama a função list do inventário para exibir os itens
        break;
    default:
        std::cout << "Opção inválida!" << std::endl;
    }
}

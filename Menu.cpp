#include "Menu.hpp"
#include "Player.hpp"
#include "Farmer.hpp"
#include <iostream>

Menu::Menu(){};

void Menu::listarAtividades(Player &p)
{
    int option;
    Farmer f;
    do
    {
        std::cout << "Atividades disponíveis:" << std::endl;
        std::cout << "       1- Colher trigo" << std::endl;
        std::cout << "       2- Colher cenouras" << std::endl;
        std::cout << "       3- Alimentar as galinhas" << std::endl;
        std::cout << "       4- Cuidar dos porcos" << std::endl;
        std::cout << "       5- Pescar" << std::endl;
        std::cout << "       6- Limpar os peixes" << std::endl;
        std::cout << "       7- Minerar" << std::endl;
        std::cout << "       8- Refinar os minérios" << std::endl;
        std::cout << "       9- Loja" << std::endl;
        std::cout << "       0- Sair" << std::endl;
        std::cin >> option;
        switch (option)
        {
        case 1:
            f.getWheat(3, p.getInventory());
            break;

        default:
            break;
        }
    } while (option != 0);
}
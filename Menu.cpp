#include "Menu.hpp"
#include "ItemsStorage.hpp"
#include "Sistema.hpp"
#include "Player.hpp"
#include "Farmer.hpp"
#include "Fisherman.hpp"
#include "Miner.hpp"
#include "Livestocker.hpp"
#include "TerminalPalette.hpp"
#include <iostream>

Menu::Menu(){};

void Menu::listarAtividades(Player *p, ItemsStorage *storage, Sistema *sistema)
{

    int option;
    int quantidade;
    Farmer f;
    Livestocker l;
    Fisherman i;
    Miner m;
    do
    {
        std::cout << color::greens << "Atividades disponiveis:" << color::off << std::endl;
        std::cout << color::green;
        sistema->printText("       1- Colher trigo");
        sistema->printText("       2- Colher cenouras");
        sistema->printText("       3- Alimentar as galinhas");
        sistema->printText("       4- Cuidar dos porcos");
        sistema->printText("       5- Pescar");
        sistema->printText("       6- Limpar os peixes");
        sistema->printText("       7- Minerar");
        sistema->printText("       8- Refinar os minerios");
        sistema->printText("       9- Loja");
        sistema->printText("       10- Ver inventario");
        sistema->printText("       11- Ver perfil");
        sistema->printText("       0- Sair");
        std::cout << color::off;

        do
        {
            std::cin >> option;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cout << color::redf << "Digite uma tarefa válida" << color::off << std::endl;
            }
            else if (option < 0 || option > 11)
            {
                std::cout << color::grayb << "Uhmm, ainda nao sabemos fazer essa tarefa..." << color::off << std::endl;
            }
        } while (std::cin.fail() || option < 0 || option > 11);

        switch (option)
        {
        case 1:
            std::cout << color::grayb << "Quantos trigos deseja plantar?" << color::off << std::endl;
            std::cin >> quantidade;
            f.getWheat(quantidade, p, storage);
            break;
        case 2:
            std::cout << color::grayb << "Quantas cenouras deseja plantar?" << color::off << std::endl;
            std::cin >> quantidade;
            f.getCarrot(quantidade, p, storage);
            break;
        case 3:
            std::cout << color::grayb << "Quantas galinhas deseja alimentar?" << color::off << std::endl;
            std::cin >> quantidade;
            l.getEgg(quantidade, p, storage);
            break;
        case 4:
            std::cout << color::grayb << "Quantos porcos deseja cuidar?" << color::off << std::endl;
            std::cin >> quantidade;
            l.getBacon(quantidade, p, storage);
            break;
        case 5:
            i.fish(p, storage);
            break;
        case 6:
            i.cleanFish(p);
            break;
        case 7:
            m.ore(p, storage);
            break;
        case 8:
            m.refine(p);
            break;
        case 9:
            // exibir a loja
            break;
        case 10:
            p->printInventory();
            break;
        case 11:
            p->displayProfile();
            break;
        default:
            break;
        }
        std::cout << std::endl;
    } while (option != 0);
}
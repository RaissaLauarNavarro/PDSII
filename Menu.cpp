#include "Menu.hpp"
#include "Sistema.hpp"
#include "Player.hpp"
#include "Farmer.hpp"
#include "Fisherman.hpp"
#include "Miner.hpp"
#include "Livestocker.hpp"
#include "TerminalPalette.hpp"
#include <iostream>

Menu::Menu(){};

void Menu::listarAtividades(Player *p, Sistema *sistema)
{

    int option;
    int quantidade = 0;
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
        sistema->printText("       9- Ver inventario");
        sistema->printText("       10- Ver perfil");
        sistema->printText("       11- Obter mais sementes");
        sistema->printText("       0- Sair");
        std::cout << color::off;

        do
        {
            std::cin >> option;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cout << color::redf;
                sistema->printText("Digite uma tarefa válida");
                std::cout << color::off << std::endl;
            }
            else if (option < 0 || option > 11)
            {
                std::cout << color::grayb;
                sistema->printText("Uhmm, ainda nao sabemos fazer essa tarefa...");
                std::cout << color::off << std::endl;
            }
        } while (std::cin.fail() || option < 0 || option > 11);

        switch (option)
        {
        case 1:
            std::cout << color::grayb;
            sistema->printText("Quantos trigos deseja plantar?");
            std::cout << color::off;
            std::cin >> quantidade;
            f.getWheat(quantidade, p, sistema);
            break;
        case 2:
            std::cout << color::grayb;
            sistema->printText("Quantas cenouras deseja plantar?");
            std::cout << color::off << std::endl;
            std::cin >> quantidade;
            f.getCarrot(quantidade, p, sistema);
            break;
        case 3:
            std::cout << color::grayb;
            sistema->printText("Quantas galinhas deseja alimentar?");
            std::cout << color::off << std::endl;
            std::cin >> quantidade;
            l.getEgg(quantidade, p, sistema);
            break;
        case 4:
            std::cout << color::grayb;
            sistema->printText("Quantos porcos deseja cuidar?");
            std::cout << color::off << std::endl;
            std::cin >> quantidade;
            l.getBacon(quantidade, p, sistema);
            break;
        case 5:
            i.fish(p, sistema);
            break;
        case 6:
            i.cleanFish(p, sistema);
            break;
        case 7:
            m.ore(p, sistema);
            break;
        case 8:
            m.refine(p, sistema);
            break;
        case 9:
            p->printInventory();
            break;
        case 10:
            p->displayProfile();
            break;
        case 11:
            p->getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
            std::cout << color::grayb;
            sistema->printText("Novas sementes foram adicionadas!");
            std::cout << color::off;
            break;
        default:
            break;
        }
        std::cout << std::endl;
    } while (option != 0);
}
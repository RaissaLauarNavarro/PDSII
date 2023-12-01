#pragma once
#include "Menu.hpp"
#include "Player.hpp"
#include "Farmer.hpp"
#include "Fisherman.hpp"
#include "Miner.hpp"
#include "Livestocker.hpp"
#include "TerminalPalette.hpp"
#include <iostream>

Menu::Menu(){};

void Menu::listarAtividades(Player *p)
{
    int option;
    int quantidade;
    Farmer f;
    Livestocker l;
    Fisherman i;
    Miner m;
    do
    {
        std::cout<<color::greens << "Atividades disponíveis:" << color::off<<std::endl;
        std::cout <<color::green << "       1- Colher trigo" << color::off<< std::endl;
        std::cout <<color::green << "       2- Colher cenouras" << color::off<< std::endl;
        std::cout <<color::green << "       3- Alimentar as galinhas" << color::off<< std::endl;
        std::cout <<color::green << "       4- Cuidar dos porcos" << color::off<< std::endl;
        std::cout <<color::green << "       5- Pescar" << color::off<< std::endl;
        std::cout <<color::green << "       6- Limpar os peixes" << color::off<< std::endl;
        std::cout <<color::green << "       7- Minerar" << color::off<< std::endl;
        std::cout <<color::green << "       8- Refinar os minérios" << color::off<< std::endl;
        std::cout <<color::green << "       9- Ver inventário" << color::off<< std::endl;
        std::cout <<color::green << "       10- Loja" << color::off<< std::endl;
        std::cout <<color::green << "       0- Sair" << color::off<< std::endl;

        do {
            std::cin >> option;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cout<<color::redf << "Digite uma tarefa válida" << color::off<<std::endl;
            } else if (option < 0 || option > 10) {
                std::cout<<color::grayb << "Uhmm, ainda não sabemos fazer essa tarefa..." << color::off<<std::endl;
            }
        } while (std::cin.fail() || option < 0 || option > 10);

        switch (option)
        {
        case 1:
            std::cout<<color::grayb << "Quantos trigos deseja plantar?" << color::off<<std::endl;
            std::cin >> quantidade;
            f.getWheat(quantidade, p);
            break;
        case 2:
            std::cout<<color::grayb << "Quantas cenouras deseja plantar?" << color::off<<std::endl;
            std::cin >> quantidade;
            f.getCarrot(quantidade, p);
            break;
        case 3:
            std::cout<<color::grayb << "Quantas galinhas deseja alimentar?" << color::off<<std::endl;
            std::cin >> quantidade;
            l.getEgg(quantidade, p);
            break;
        case 4:
            std::cout<<color::grayb << "Quantos porcos deseja cuidar?" << color::off<<std::endl;
            std::cin >> quantidade;
            l.getBacon(quantidade, p);
            break;
        case 5:
            i.fish(p);
            break;
        case 6:
            i.cleanFish(p);
            break;
        case 7:
            m.ore(p);
            break;
        case 8:
            m.refine(p);
            break;
        case 9:
            p->printInventory();
            break;
        case 10:
            // exibir a loja
            break;
        default:
            break;
        }
    } while (option != 0);
}
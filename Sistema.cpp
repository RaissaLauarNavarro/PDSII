#pragma once
#include "Sistema.hpp"
#include "Player.hpp"
#include "Menu.hpp"
#include "TerminalPalette.hpp"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

Sistema::Sistema() : _player(){};
void Sistema::criarPersonagem()
{
    std::cout<<color::purpleb << "Bem vindo(a) a sua nova fazenda!" << color::off<< std::endl;
    std::cout << "Informe um nome para o seu personagem:";
    std::string nome;
    std::cin >> nome;
    // std::cout << "Escolha uma classe pro seu personagem:" << std::endl;
    // std::cout << "  1- Fazendeiro" << std::endl;
    // std::cout << "  2- Pescador" << std::endl;
    // std::cout << "  3- Pecuarista" << std::endl;
    // std::cout << "  4- Mineiro" << std::endl;
    // int classe;
    // do
    // {
    //     std::cin >> classe;
    //     switch (classe)
    //     {
    //     case 1:
    //         std::cout << "Fazendeiro!" << std::endl;
    //         break;
    //     case 2:
    //         std::cout << "Pescador" << std::endl;
    //         /* code */
    //         break;
    //     case 3:
    //         std::cout << "Pecuarista" << std::endl;
    //         /* code */
    //         break;
    //     case 4:
    //         std::cout << "Mineiro" << std::endl;
    //         /* code */
    //         break;

    //     default:
    //         std::cout << "Valor inválido, tente novamente." << std::endl;
    //         break;
    //     }
    // } while (classe != 1 && classe != 2 && classe != 3 && classe != 4);
    // _player = Player(nome);

    // Menu menuteste = Menu();

    // menuteste.listarAtividades(_player);

    _player.printInventory();
};
void Sistema::printText(const std::string texto)
{
    for (char x : texto)
    {
        unsigned seed = time(0);
        std::cout << x;
        srand(seed);
        // std::cout << rand() % 300 << std::endl;
        Sleep(rand() % 300);
    }
    std::cout << std::endl;
}
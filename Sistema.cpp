#include "Sistema.hpp"
#include <iostream>

Sistema::Sistema() : _player()
{
    std::cout << "Bem vindo ao jogo!" << std::endl;
    std::cout << "Informe um nome para o seu personagem:";
}
void Sistema::criarPersonagem(const char *name)
{
    std::cout << "Escolha uma classe pro seu personagem:" << std::endl;
    std::cout << "  1- Fazendeiro" << std::endl;
    std::cout << "  2- Pescador" << std::endl;
    std::cout << "  3- Pecuarista" << std::endl;
    std::cout << "  4- Mineiro" << std::endl;
    int classe;
    do
    {
        std::cin >> classe;
        switch (classe)
        {
        case 1:
            std::cout << "Fazendeiro!" << std::endl;
            break;
        case 2:
            std::cout << "Pescador" << std::endl;
            /* code */
            break;
        case 3:
            std::cout << "Pecuarista" << std::endl;
            /* code */
            break;
        case 4:
            std::cout << "Mineiro" << std::endl;
            /* code */
            break;

        default:
            std::cout << "Valor inválido, tente novamente." << std::endl;
            break;
        }
    } while (classe != 1 && classe != 2 && classe != 3 && classe != 4);
    _player = Player(name, "classe");
};
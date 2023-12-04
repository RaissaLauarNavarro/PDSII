#include "Player.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include "TerminalPalette.hpp"
#include <iostream>

Player::Player() : _name(""), _level(0.0), _xp(0.0), _inventario(0){};
Player::Player(const std::string name) : _name(name), _level(0.0), _xp(0.0), _inventario(10){};

void Player::functeste()
{
    Item ITEMTESTE(0, "Item teste 1", 10.3, true);
    _inventario.insert(ITEMTESTE.getId(), ITEMTESTE);
    _inventario.list();
}
void Player::printInventory()
{
    _inventario.printInventory();
}

void Player::addXp(float newXp)
{
    _xp += newXp;
    if(_xp >= 150.0){
        _level++;
        _xp = 0;
        std::cout<<color::bluen << "Nivel atualizado: " << _level <<color::off<< std::endl;
        std::cout<<color::bluen << "Pontos de experiencia atualizados: " << _xp <<color::off<< std::endl;
    }
}

float Player::getLevel()
{
    return _level;
}

Inventory* Player::getInventory()
{
    return &_inventario;
}

void Player::displayProfile()
{
    std::cout << color::blues << "--------------- MEU PERFIL ---------------" << color::off<< std::endl;
    std::cout << color::bluen << "Nome de jogador: " << _name << color::off<< std::endl;
    std::cout << color::bluen << "Nivel: " << _level << color::off<< std::endl;
    std::cout << color::bluen << "Pontos de experiencia: " << _xp << color::off<< std::endl;
    std::cout << std::endl;
}

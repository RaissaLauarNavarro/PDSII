#include "Farmer.hpp"
#include "Livestocker.hpp"
#include "Fisherman.hpp"
#include "Miner.hpp"
#include "Player.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include <iostream>

Player::Player() : _name(""), _level(0), _xp(0), _inventario(0){};
Player::Player(const std::string name) : _name(name), _level(0), _xp(0), _inventario(10){};

void Player::functeste()
{
    Item ITEMTESTE(0, "Item teste 1", 10.3, true);
    _inventario.insert(ITEMTESTE.getId(), ITEMTESTE);
    _inventario.list();
}
void Player::printInventory()
{
    _inventario.list();
}

void Player::addXp(float newXp)
{
    _xp += newXp;
    if(_xp == 100.0){
        _level++;
        _xp = 0;
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
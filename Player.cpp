#pragma once
#include "Player.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include <iostream>

Player::Player() : _name(""), _nivel(0), _inventario(0){};
Player::Player(const std::string name) : _name(name), _nivel(0), _inventario(10){};

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
Inventory* Player::getInventory()
{
    return &_inventario;
}
#pragma once
#include "Player.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include <iostream>

/// @brief Construtor padrão da classe Player.
Player::Player() : _name(""), _nivel(0), _inventario(0){};

/// @brief Construtor parametrizado da classe Player.
/// @param name: O nome do jogador.
Player::Player(const std::string name) : _name(name), _nivel(0), _inventario(10){};

/// @brief Função para testar a funcionalidade da classe Player.
void Player::functeste()
{
    Item ITEMTESTE(0, "Item teste 1", 10.3, true);
    _inventario.insert(ITEMTESTE.getId(), ITEMTESTE);
    _inventario.list();
}
/// @brief Função para imprimir o inventário do jogador.
void Player::printInventory()
{
    _inventario.list();
}
Inventory &Player::getInventory()
{
    return _inventario;
}

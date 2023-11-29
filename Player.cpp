#include "Player.hpp"
#include "Inventory.hpp"

Player::Player() : _name(""), _classe(""), _nivel(0), _inventario(0){};
Player::Player(const std::string name, const std::string classe) : _name(name), _classe(classe), _nivel(0), _inventario(10){};
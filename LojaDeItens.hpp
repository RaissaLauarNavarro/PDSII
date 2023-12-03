// LojaDeItens.hpp

#pragma once
#include <map>
#include <string>
#include "Item.hpp"
#include "Player.hpp"
#include "Inventory.hpp"

class LojaDeItens
{
public:
    LojaDeItens(Player* player, Inventory* inventory);

    void exibirItens();

private:
    Player* _player;
    Inventory* _inventory;
};


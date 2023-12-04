#pragma once
#include <map>
#include <string>
#include "Item.hpp"
#include "Player.hpp"
#include "Inventory.hpp"


class LojaDeItens
{
public:

    LojaDeItens(Player* player, Inventory* inventory, Item* item);

    
    void exibirItens();
    
    void LojaDeItens::comprarItem();
    
    void LojaDeItens::venderItem();

private:
    Player* _player;
    Inventory* _inventory;
    Item* _items;
};


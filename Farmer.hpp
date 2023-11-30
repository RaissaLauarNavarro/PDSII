#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Farmer{
    public:
        Inventory getWheat(int quantidade, Inventory inventario);
        
        Inventory getCarrot(int quantidade, Inventory inventario);
};
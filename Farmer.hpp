#pragma once
#include "Item.hpp"
#include "Inventario.hpp"

class Farmer{
    public:
        Inventory getWheat(int quantidade, Inventory inventario);
        
        Inventory getCarrot(int quantidade, Inventory inventario);
};
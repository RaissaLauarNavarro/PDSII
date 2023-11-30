#pragma once
#include "Item.hpp"
#include "Inventario.hpp"

class Livestocker{
    public:
        Inventory getBacon(int quantidade, Inventory inventario);
        
        Inventory getEgg(int quantidade, Inventory inventario);
};
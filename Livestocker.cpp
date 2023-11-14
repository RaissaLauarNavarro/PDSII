#pragma once
#include <iostream>

#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventario.hpp"

Inventory Livestocker::getBacon(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : _inventory) {
        if(entry.first == 2 && i < quantidade){
            inventario.insert(2, Item(2, "Trigo", 1.00, 0)); 
            //remover 1 trigo do inventário
            i++;
        }
    }
    return inventario;
}


Inventory Livestocker::getEgg(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : _inventory) {
        if(entry.first == 3  && i < quantidade){ 
            inventario.insert(3, Item(3, "Cenoura", 1.00, 0)); 
            //remover 1 cenoura do inventário
            i++;
        }
    }
    return inventario;
}
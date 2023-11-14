#pragma once
#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "Inventario.hpp"

Inventory Farmer::getWheat(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : _inventory) {
        if(entry.first ==   && i < quantidade){ //colocar o item semente
            inventario.insert(2, Item(2, "Trigo", 1.00, 0)); 
            //remover 1 semente do inventário
            i++;
        }
    }
    return inventario;
}


Inventory Farmer::getCarrot(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : _inventory) {
        if(entry.first ==   && i < quantidade){ //colocar o item semente
            inventario.insert(3, Item(3, "Cenoura", 1.00, 0)); 
            //remover 1 semente do inventário
            i++;
        }
    }
    return inventario;
}
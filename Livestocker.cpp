#pragma once
#include <iostream>

#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventario.hpp"

Inventory Livestocker::getBacon(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : inventario) {
        if(entry.first == 2 && i < quantidade){
            inventario.insert(2, Item(12, "Bacon", 5.00, 0)); 
            //remover 1 trigo do inventário
            i++;
        }
    }
    return inventario;
}


Inventory Livestocker::getEgg(int quantidade, Inventory inventario){
    int i = 0;
    for (const auto& entry : inventario) {
        if(entry.first == 3  && i < quantidade){ 
            inventario.insert(3, Item(13, "Ovo", 4.00, 0)); 
            //remover 1 cenoura do inventário
            i++;
        }
    }
    return inventario;
}
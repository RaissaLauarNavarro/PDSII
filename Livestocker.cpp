#pragma once
#include <iostream>

#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"

Inventory Livestocker::getBacon(int quantidade, Inventory inventario){
    try{ 
        int i = 0;
        inventario.insert(2, Item(12, "Bacon", 5.00, 0)); 
        //remover 1 cenoura do inventário
        i++;
    }catch(std::runtime_error const &e){

    }
    return inventario;
}


Inventory Livestocker::getEgg(int quantidade, Inventory inventario){
    try{
         int i = 0;
            inventario.insert(3, Item(13, "Ovo", 4.00, 0)); 
            //remover 1 trigo do inventário
            i++;
    }catch(std::runtime_error const &e){

    }
    return inventario;
}
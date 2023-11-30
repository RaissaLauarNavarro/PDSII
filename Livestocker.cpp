#pragma once
#include <iostream>

#include "Livestocker.hpp"
#include "Item.hpp"
#include "inventory.hpp"

void Livestocker::getBacon(int quantidade, Inventory* inventario){
    try{ 
        int i = 0;
        inventario->insert(12, Item(12, "Bacon", 5.00, 0)); 
        inventario->remove(3, quantidade);
        i++;
    }catch(std::runtime_error const &e){

    }
}


void Livestocker::getEgg(int quantidade, Inventory* inventario){
    try{
         int i = 0;
            inventario->insert(13, Item(13, "Ovo", 3.00, 0)); 
            inventario->remove(2, quantidade);
            i++;
    }catch(std::runtime_error const &e){

    }
}
#pragma once
#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "Inventory.hpp"

void Farmer::getWheat(int quantidade, Inventory* inventario){
    try{ 
        for(int i=0; i<=quantidade; i++){
            inventario->insert(2, Item(2, "Trigo", 1.00, 0)); 
            inventario->remove(1, quantidade);
        }
    }catch(std::runtime_error const &e){

    }
}


void Farmer::getCarrot(int quantidade, Inventory* inventario){
    int i = 0;
    try{ 
        for(int i=0; i<=quantidade; i++){
            inventario->insert(3, Item(3, "Cenoura", 1.00, 0)); 
            inventario->remove(1, quantidade);
        }
    }catch(std::runtime_error const &e){

    }
}
#pragma once
#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "inventory.hpp"

Inventory Farmer::getWheat(int quantidade, Inventory inventario){
    try{ 
        int i = 0;
        inventario.insert(2, Item(2, "Trigo", 1.00, 0)); 
        //remover 1 semente do inventário
        i++;
    }catch(std::runtime_error const &e){

    }
    return inventario;
}


Inventory Farmer::getCarrot(int quantidade, Inventory inventario){
    int i = 0;
    try{ 
        inventario.insert(3, Item(3, "Cenoura", 1.00, 0)); 
        //remover 1 semente do inventário
        i++;
    }catch(std::runtime_error const &e){

    }
    return inventario;
}
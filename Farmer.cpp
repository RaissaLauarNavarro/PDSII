#pragma once
#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "Player.hpp"
#include "TerminalPalette.hpp"

void Farmer::getWheat(int quantidade, Player* p)
{
    try{ 
        for(int i=0; i<=quantidade; i++){
            p->getInventory()->insert(2, Item(2, "Trigo", 1.00, 0)); 
            p->getInventory()->remove(1, quantidade);
            p->addXp(15.0);
        }
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Não foi possivel plantar o trigo..." << color::off<<std::endl;
        return;
    }
    std::cout<<color::cyan << "Trigos adicionados ao seu inventário!" << color::off<<std::endl;
}


void Farmer::getCarrot(int quantidade, Player* p)
{
    int i = 0;
    try{ 
        for(int i=0; i<=quantidade; i++){
            p->getInventory()->insert(3, Item(3, "Cenoura", 1.00, 0)); 
            p->getInventory()->remove(1, quantidade);
            p->addXp(15.0);
        }
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Não foi possivel plantar a cenoura..." << color::off<<std::endl;
        return;
    }
    std::cout<<color::cyan << "Cenouras adicionadas ao seu inventário!" << color::off<<std::endl;
}
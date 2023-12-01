#pragma once
#include <iostream>

#include "Player.hpp"
#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "TerminalPalette.hpp"

void Livestocker::getBacon(int quantidade, Player* p)
{
    try{ 
        int i = 0;
        p->getInventory()->insert(12, Item(12, "Bacon", 5.00, 0)); 
        p->getInventory()->remove(3, quantidade);
        i++;
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Não foi possivel produzir bacon..." << color::off<<std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout<<color::cyan << "Bacons adicionados ao seu inventário!" << color::off<<std::endl;
}


void Livestocker::getEgg(int quantidade, Player* p)
{
    try{
         int i = 0;
            p->getInventory()->insert(13, Item(13, "Ovo", 3.00, 0)); 
            p->getInventory()->remove(2, quantidade);
            i++;
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Não foi possivel produzir ovo..." << color::off<<std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout<<color::cyan << "Ovos adicionados ao seu inventário!" << color::off<<std::endl;
}
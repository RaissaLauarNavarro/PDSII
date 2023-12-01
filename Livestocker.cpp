#include <iostream>

#include "Player.hpp"
#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "TerminalPalette.hpp"

void Livestocker::getBacon(int quantidade, Player* p)
{
    try{ 
        if (p->getInventory()->hasItem(3, quantidade)) {
            for(int i=0; i<quantidade; i++){
                p->getInventory()->insert(12, Item(12, "Bacon", 5.00, 0)); 
                p->getInventory()->remove(3, 1);
            }
        }
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Nao foi possivel produzir bacon... verifique se possui todos os itens necessarios" << color::off<<std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout<<color::cyan << "Bacons adicionados ao seu inventario!" << color::off<<std::endl;
}


void Livestocker::getEgg(int quantidade, Player* p)
{
    try{
        if (p->getInventory()->hasItem(3, quantidade)) {
            for(int i=0; i<quantidade; i++){
                p->getInventory()->insert(13, Item(13, "Ovo", 3.00, 0)); 
                p->getInventory()->remove(2, quantidade);
            }
        }
    }catch(std::runtime_error const &e){
        std::cout<<color::redi << "Nao foi possivel produzir ovo... verifique se possui todos os itens necessarios" << color::off<<std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout<<color::cyan << "Ovos adicionados ao seu inventario!" << color::off<<std::endl;
}
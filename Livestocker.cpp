#include <iostream>

#include "Player.hpp"
#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "Sistema.hpp"
#include "TerminalPalette.hpp"

void Livestocker::getBacon(int quantidade, Player *p, Sistema *sistema)
{
    
    if (p->getInventory()->hasItem(3, quantidade))
    {
        for (int i = 0; i < quantidade; i++)
        {
            p->getInventory()->insert(12, Item(12, "Bacon", 5.00, 0)); 
            p->getInventory()->remove(3, 1);
            p->addXp(15.0);
        }
    }
    else
    {
        std::cout << color::redi;
        sistema->printText("Nao foi possivel produzir bacon... verifique se possui todos os itens necessarios");
        std::cout << color::off;
        return;
    }
    std::cout << color::cyan;
    sistema->printText("Bacons adicionados ao seu inventario!");
    std::cout << color::off;
}

void Livestocker::getEgg(int quantidade, Player *p, Sistema *sistema)
{
    
    if (p->getInventory()->hasItem(2, quantidade))
    {
        for (int i = 0; i < quantidade; i++)
        {                
            p->getInventory()->insert(13, Item(13, "Ovo", 3.00, 0)); 
            p->getInventory()->remove(2, quantidade);
        }
    }
    else
    {
        std::cout << color::redi;
        sistema->printText("Nao foi possivel produzir ovo... verifique se possui todos os itens necessarios");
        std::cout << color::off;
        return;
    }
    p->addXp(15.0);
    std::cout << color::cyan;
    sistema->printText("Ovos adicionados ao seu inventario!");
    std::cout << color::off;
}
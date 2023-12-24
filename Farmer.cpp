#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "Player.hpp"
#include "Sistema.hpp"
#include "TerminalPalette.hpp"

void Farmer::getWheat(int quantidade, Player *p, Sistema *sistema)
{
        if (p->getInventory()->hasItem(0, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                p->getInventory()->remove(0, 1);
                p->getInventory()->insert(2, Item(2, "Trigo", 1.00, 0));
                p->addXp(15.0);
            }
        }
        else
        {
            std::cout << color::redi;
            sistema->printText("Nao foi possivel plantar o trigo... verifique se possui todos os itens necessarios");
            std::cout << color::off << std::endl;
            return;
        }
    std::cout << color::cyan;
    sistema->printText("Trigos adicionados ao seu inventario!");
    std::cout << color::off << std::endl;
}

void Farmer::getCarrot(int quantidade, Player *p, Sistema *sistema)
{
  
    if (p->getInventory()->hasItem(0, quantidade))
    {
        for (int i = 0; i < quantidade; i++)
        {
            p->getInventory()->remove(0, 1);
            p->getInventory()->insert(3, Item(3, "Cenoura", 1.00, 0));
            p->addXp(15.0);
        }
    }
    else
    {
        std::cout << color::redi;
    sistema->printText("Nao foi possivel plantar a cenoura... verifique se possui todos os itens necessarios");
    std::cout << color::off;
    return;
    }
    std::cout << color::cyan;
    sistema->printText("Cenouras adicionadas ao seu inventario!");
    std::cout << color::off;
}
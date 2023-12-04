#include <iostream>

#include "Farmer.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"
#include "Player.hpp"
#include "TerminalPalette.hpp"

void Farmer::getWheat(int quantidade, Player *p, ItemsStorage *storage)
{
    try
    {
        if (p->getInventory()->hasItem(0, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                p->getInventory()->remove(0, 1);
                Item item = storage->findByName("Trigo");
                p->getInventory()->insert(item.getId(), item);
                p->addXp(15.0);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrada semente");
        }
    }
    catch (std::runtime_error const &e)
    {
        std::cout << color::redi << "Nao foi possivel plantar o trigo... verifique se possui todos os itens necessarios" << color::off << std::endl;
        return;
    }
    std::cout << color::cyan << "Trigos adicionados ao seu inventario!" << color::off << std::endl;
}

void Farmer::getCarrot(int quantidade, Player *p, ItemsStorage *storage)
{
    try
    {
        if (p->getInventory()->hasItem(0, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                Item cenoura = storage->findByName("Cenoura");
                p->getInventory()->insert(cenoura.getId(), cenoura);
                p->getInventory()->remove(0, 1);
                p->addXp(15.0);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrada semente");
        }
    }
    catch (std::runtime_error const &e)
    {
        std::cout << color::redi << "Nao foi possivel plantar a cenoura... verifique se possui todos os itens necessarios" << color::off << std::endl;
        return;
    }
    std::cout << color::cyan << "Cenouras adicionadas ao seu inventario!" << color::off << std::endl;
}
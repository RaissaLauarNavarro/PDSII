#include <iostream>

#include "Player.hpp"
#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"
#include "TerminalPalette.hpp"

void Livestocker::getBacon(int quantidade, Player *p, ItemsStorage *storage)
{
    try
    {
        if (p->getInventory()->hasItem(3, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                Item bacon = storage->findByName("Bacon");
                p->getInventory()->insert(bacon.getId(), bacon);
                p->getInventory()->remove(3, 1);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrada cenoura");
        }
    }
    catch (std::runtime_error const &e)
    {
        std::cout << color::redi << "Nao foi possivel produzir bacon... verifique se possui todos os itens necessarios" << color::off << std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout << color::cyan << "Bacons adicionados ao seu inventario!" << color::off << std::endl;
}

void Livestocker::getEgg(int quantidade, Player *p, ItemsStorage *storage)
{
    try
    {
        if (p->getInventory()->hasItem(3, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                Item ovo = storage->findByName("Ovo");
                p->getInventory()->insert(ovo.getId(), ovo);
                p->getInventory()->remove(2, quantidade);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrado trigo");
        }
    }
    catch (std::runtime_error const &e)
    {
        std::cout << color::redi << "Nao foi possivel produzir ovo... verifique se possui todos os itens necessarios" << color::off << std::endl;
        return;
    }
    p->addXp(15.0);
    std::cout << color::cyan << "Ovos adicionados ao seu inventario!" << color::off << std::endl;
}
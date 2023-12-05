#include <iostream>

#include "Player.hpp"
#include "Livestocker.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"
#include "TerminalPalette.hpp"

void Livestocker::getBacon(int quantidade, Player *p, ItemsStorage *storage, Sistema *sistema)
{
    try
    {
        if (p->getInventory()->hasItem(2, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                Item bacon = storage->findByName("Bacon");
                p->getInventory()->insert(bacon.getId(), bacon);
                p->getInventory()->remove(2, 1);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrada cenoura");
        }
    }
    catch (std::runtime_error const &e)
    {
        std::cout << color::redi;
        sistema->printText("Nao foi possivel produzir bacon... verifique se possui todos os itens necessarios");
        std::cout << color::off;
        return;
    }
    p->addXp(15.0);
    std::cout << color::cyan;
    sistema->printText("Bacons adicionados ao seu inventario!");
    std::cout << color::off;
}

void Livestocker::getEgg(int quantidade, Player *p, ItemsStorage *storage, Sistema *sistema)
{
    try
    {
        if (p->getInventory()->hasItem(1, quantidade))
        {
            for (int i = 0; i < quantidade; i++)
            {
                Item ovo = storage->findByName("Ovo");
                p->getInventory()->insert(ovo.getId(), ovo);
                p->getInventory()->remove(1, quantidade);
            }
        }
        else
        {
            throw std::runtime_error("Não foi encontrado trigo");
        }
    }
    catch (std::runtime_error const &e)
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
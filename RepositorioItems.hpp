#pragma once
#include <set>

class RepositorioItems
{
    RepositorioItems();

    bool insert(Item item)

    bool list(std::set<Item> items)

    private:
    {
        std::set<Item> _repositorioItems;
    }
}
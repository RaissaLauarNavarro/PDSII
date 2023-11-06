#pragma once
#include <map>
#include "Item.hpp"

class Inventory
{
public:
    /// @brief Cria uma instância de inventário com tamanho máximo definido
    /// @param capacity - quantidade de elementos máxima do inventário
    Inventory(unsigned capacity);

    /// @brief Insere um item no inventário do player
    /// @param item - item a ser inserido no inventario
    /// @return true se o elemento foi inserido, false se não for
    bool insert(Item item);

    /// @brief Insere um item no inventário do player
    /// @param item - item a ser vendido e retirado do inventario
    /// @return true se o elemento foi encontrado, false se não for
    bool sell();

    std::map<Item, unsigned> list();

private:
    unsigned _inventorySize;
    std::map<Item, unsigned> _inventory;
};
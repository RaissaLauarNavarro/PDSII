#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Farmer
{
public:
    /// @brief Substitui o item semente por trigo
    /// @param quantidade número de trigos a serem obtidos
    /// @param player ponteiro o jogador
    void getWheat(int quantidade, Player *p, ItemsStorage *storage);

    /// @brief Substitui o item semente por cenoura
    /// @param quantidade número de cenouras a serem obtidas
    /// @param player ponteiro o jogador
    void getCarrot(int quantidade, Player *p, ItemsStorage *storage);
};

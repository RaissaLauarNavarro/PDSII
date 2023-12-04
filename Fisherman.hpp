#pragma once
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"

class Fisherman
{
public:
    /// @brief Gera peixes aletórios para o usuário
    /// @param player ponteiro o jogador
    void fish(Player *p, ItemsStorage *i);

    /// @brief Aumenta o valor de venda dos peixes em 10%
    /// @param player ponteiro o jogador
    void cleanFish(Player *p);
};
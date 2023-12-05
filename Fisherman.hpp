#pragma once
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"

/**
 * @file
 * @brief Contém a definição da classe Fisherman.
 */

/**
 * @class Fisherman
 * @brief Representa um pescador no jogo.
 */
class Fisherman
{
public:
    /**
     * @brief Gera peixes aleatórios para o jogador.
     * @param player Ponteiro para o jogador.
     * @param storage Ponteiro para o armazenamento de itens.
     */
    void fish(Player *player, ItemsStorage *storage);

    /**
     * @brief Aumenta o valor de venda dos peixes em 10%.
     * @param player Ponteiro para o jogador.
     */
    void cleanFish(Player *player);
};

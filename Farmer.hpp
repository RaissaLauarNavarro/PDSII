#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

/**
 * @file
 * @brief Contém a definição da classe Farmer.
 */

/**
 * @class Farmer
 * @brief Representa um agricultor no jogo.
 */
class Farmer
{
public:
    /**
     * @brief Substitui o item semente por trigo.
     * @param quantidade Número de trigos a serem obtidos.
     * @param player Ponteiro para o jogador.
     * @param storage Ponteiro para o armazenamento de itens.
     */
    void getWheat(int quantidade, Player *player, ItemsStorage *storage, Sistema *sistema);

    /**
     * @brief Substitui o item semente por cenoura.
     * @param quantidade Número de cenouras a serem obtidas.
     * @param player Ponteiro para o jogador.
     * @param storage Ponteiro para o armazenamento de itens.
     */
    void getCarrot(int quantidade, Player *player, ItemsStorage *storage, Sistema *sistema);
};

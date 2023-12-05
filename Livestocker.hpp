#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

/**
 * @file
 * @brief Contém a definição da classe Livestocker.
 */

/**
 * @class Livestocker
 * @brief Representa um criador de animais no jogo.
 */
class Livestocker
{
public:
    /**
     * @brief Substitui o item cenoura por bacon.
     * @param quantidade Número de bacons a serem obtidos.
     * @param player Ponteiro para o jogador.
     * @param storage Ponteiro para o gerenciador de items.
     */
    void getBacon(int quantidade, Player *player, ItemsStorage *storage, Sistema *sistema);

    /**
     * @brief Substitui o item trigo semente por ovo.
     * @param quantidade Número de ovos a serem obtidos.
     * @param player Ponteiro para o jogador.
     * @param storage Ponteiro para o gerenciador de items.
     */
    void getEgg(int quantidade, Player *player, ItemsStorage *storage, Sistema *sistema);
};

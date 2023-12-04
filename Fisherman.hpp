#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

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
     * @brief Gera peixes aleatórios para o usuário.
     * @param inventario Ponteiro para o inventário do jogador com seus itens.
     */
    void fish(Inventory* inventario);

    /**
     * @brief Aumenta o valor de venda dos peixes em 10%.
     * @param inventario Ponteiro para o inventário do jogador com seus itens.
     */
    void cleanFish(Inventory* inventario);
};

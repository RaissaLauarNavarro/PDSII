#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

/**
 * @file
 * @brief Contém a definição da classe Farmer.
 */

/**
 * @class Farmer
 * @brief Representa um fazendeiro no jogo.
 */
class Farmer
{
public:
    /**
     * @brief Substitui o item semente por trigo.
     * @param quantidade Número de trigos a serem obtidos.
     * @param inventario Ponteiro para o inventário do jogador com seus itens.
     */
    void getWheat(int quantidade, Inventory* inventario);

    /**
     * @brief Substitui o item semente por cenoura.
     * @param quantidade Número de cenouras a serem obtidas.
     * @param inventario Ponteiro para o inventário do jogador com seus itens.
     */
    void getCarrot(int quantidade, Inventory* inventario);
};

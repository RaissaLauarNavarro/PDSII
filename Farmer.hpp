#pragma once
#include "Item.hpp"
#include "inventory.hpp"

class Farmer{
    public:
        /// @brief Substitui o item semente por trigo
        /// @param quantidade número de trigos a serem obtidos
        /// @param inventario ponteiro do invetário do jogador com seus itens
        void getWheat(int quantidade, Inventory* inventario);

        /// @brief Substitui o item semente por cenoura
        /// @param quantidade número de cenouras a serem obtidas
        /// @param inventario ponteiro do invetário do jogador com seus itens
        void getCarrot(int quantidade, Inventory* inventario);
};
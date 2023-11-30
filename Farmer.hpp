#pragma once
#include "Item.hpp"
#include "inventory.hpp"

class Farmer{
    public:
        /// @brief Substitui o item semente por trigo
        /// @param quantidade número de trigos a serem obtidos
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory getWheat(int quantidade, Inventory inventario);

        /// @brief Substitui o item semente por cenoura
        /// @param quantidade número de cenouras a serem obtidas
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory getCarrot(int quantidade, Inventory inventario);
};
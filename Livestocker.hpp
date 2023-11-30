#pragma once
#include "Item.hpp"
#include "inventory.hpp"

class Livestocker{
    public:
        /// @brief Substitui o item cenoura por bacon
        /// @param quantidade número de bacons a serem obtidos
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory getBacon(int quantidade, Inventory inventario);

        /// @brief Substitui o trigo semente por ovo
        /// @param quantidade número de ovos a serem obtidos
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory getEgg(int quantidade, Inventory inventario);
};
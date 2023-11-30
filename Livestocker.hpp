#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Livestocker{
    public:
        /// @brief Substitui o item cenoura por bacon
        /// @param quantidade número de bacons a serem obtidos
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        void getBacon(int quantidade, Inventory* inventario);

        /// @brief Substitui o trigo semente por ovo
        /// @param quantidade número de ovos a serem obtidos
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        void getEgg(int quantidade, Inventory* inventario);
};
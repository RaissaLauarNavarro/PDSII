#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Fisherman
{
    public:
        /// @brief Gera peixes aletórios para o usuário
        /// @param inventario ponteiro do invetário do jogador com seus itens
        void fish(Inventory* inventario);

        /// @brief Aumenta o valor de venda dos peixes em 10% 
        /// @param inventario ponteiro do invetário do jogador com seus itens
        void cleanFish(Inventory* inventario);
};
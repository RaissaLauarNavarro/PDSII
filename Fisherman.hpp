#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Fisherman{
    public:
        /// @brief Gera peixes aletórios para o usuário
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory fish(Inventory inventario);

        /// @brief Aumenta o valor de venda dos peixes em 10% 
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory cleanFish(Inventory inventario);
};
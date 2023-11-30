#pragma once
#include "Item.hpp"
#include "inventory.hpp"

class Miner{
    public:
        /// @brief Gera peixes aletórios para o usuário
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory ore(Inventory inventario);

        /// @brief Aumenta o valor de venda dos peixes em 10% 
        /// @param inventario invetário do jogador com seus itens
        /// @return o inventário com seus valores alterados
        Inventory refine(Inventory inventario);
};
#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Miner
{
public:
    /// @brief Gera peixes aletórios para o usuário
    /// @param inventario invetário do jogador com seus itens
    /// @param storage itens disponíves para serem adiconados ao invetário do player
    /// @return o inventário com seus valores alterados
    void ore(Player *p, Sistema *sistema);

    /// @brief Aumenta o valor de venda dos peixes em 10%
    /// @param inventario invetário do jogador com seus itens
    /// @return o inventário com seus valores alterados
    void refine(Player *p, Sistema *sistema);
};
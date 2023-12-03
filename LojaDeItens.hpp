#pragma once
#include <map>
#include <string>
#include "Item.hpp"
#include "Player.hpp"
#include "Inventory.hpp"

/// @brief Classe que representa uma loja de itens no jogo
class LojaDeItens
{
public:
    /// @brief Construtor da loja de itens
    /// @param player Ponteiro para o jogador que irá interagir com a loja
    /// @param inventory Ponteiro para o inventário do jogador
    LojaDeItens(Player* player, Inventory* inventory);

    /// @brief Exibe os itens disponíveis na loja e permite ao jogador comprar ou vender
    void exibirItens();

private:
    Player* _player;
    Inventory* _inventory;
};


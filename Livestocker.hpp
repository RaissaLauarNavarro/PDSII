#pragma once
#include "Item.hpp"
#include "Inventory.hpp"

class Livestocker
{
    public:
        /// @brief Substitui o item cenoura por bacon
        /// @param quantidade número de bacons a serem obtidos
        /// @param player ponteiro o jogador
        void getBacon(int quantidade, Player* p);

        /// @brief Substitui o trigo semente por ovo
        /// @param quantidade número de ovos a serem obtidos
        /// @param player ponteiro o jogador
        void getEgg(int quantidade, Player* p);
};
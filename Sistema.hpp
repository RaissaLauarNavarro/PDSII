#pragma once
#include "Player.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/// @brief Classe que representa o sistema do jogo.
class Sistema
{
public:
    /// @brief Construtor da classe Sistema.
    Sistema();

    /// @brief Cria um personagem no sistema.
    void criarPersonagem();

    /// @brief Imprime um texto na saída padrão.
    /// @param texto O texto a ser impresso.
    void printText(const std::string texto);

private:
    Player _player; ///< Objeto Player associado ao sistema.
};

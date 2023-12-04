#pragma once

#include <string>
#include "Inventory.hpp"

/**
 * @file
 * @brief Contém a definição da classe Player.
 */

/**
 * @class Player
 * @brief Representa um jogador.
 */
class Player {
public:
    /**
     * @brief Construtor padrão da classe Player.
     */
    Player();

    /**
     * @brief Construtor da classe Player com nome especificado.
     * @param name O nome do jogador.
     */
    Player(const std::string name);

    /**
     * @brief Função de teste para o jogador.
     */
    void functeste();

    /**
     * @brief Imprime o inventário do jogador.
     */
    void printInventory();

    /**
     * @brief Adiciona experiência ao jogador.
     * @param newXp A quantidade de experiência a ser adicionada.
     */
    void addXp(float newXp);

    /**
     * @brief Exibe o perfil do jogador.
     */
    void displayProfile();

    /**
     * @brief Obtém o nível do jogador.
     * @return O nível do jogador.
     */
    float getLevel();

    /**
     * @brief Obtém o inventário do jogador.
     * @return Ponteiro para o inventário do jogador.
     */
    Inventory* getInventory();

    // Métodos comentados para remoção temporária
    // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // virtual void findOne(char const *data);

private:
    std::string _name; ///< Nome do jogador.
    float _level; ///< Nível do jogador.
    float _xp; ///< Experiência do jogador.
    Inventory _inventario; ///< Inventário do jogador.
};

// Cabeçalho comentado para rem

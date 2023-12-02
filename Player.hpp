#pragma once

#include <string>
#include "Inventory.hpp"

class Player
{
public:
    /// @brief Construtor padrão da classe Player.
    Player();
    /// @brief Construtor parametrizado da classe Player.
    /// @param name: O nome do jogador.
    Player(const std::string name);

    /// @brief Função para testar a funcionalidade da classe Player.
    void functeste();
    /// @brief Função para imprimir o inventário do jogador.
    void printInventory();
    /// @brief Função para obter uma referência para o inventário do jogador.
    /// @return Referência para o inventário do jogador.
    Inventory &getInventory();
    // // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // // virtual void findOne(char const *data);

    /// @brief Obtém a quantidade de dinheiro do jogador
    /// @return Quantidade de dinheiro do jogador
    float getMoney();

    /// @brief Adiciona dinheiro ao jogador
    /// @param amount Quantidade de dinheiro a ser adicionada
    void addMoney(float amount);

    /// @brief Remove dinheiro do jogador
    /// @param amount Quantidade de dinheiro a ser removida
    void removeMoney(float amount);

private:
    std::string _name;
    float _nivel;
    float _money;
    Inventory _inventario;
};

// #include "StorageManager.tpp"

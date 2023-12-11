#pragma once

#include <string>
class Player;       // Forward declaration
class ItemsStorage; // Forward declaration
class Sistema;      // Forward declaration

/// @brief Classe que representa um menu.
class Menu
{
public:
    /// @brief Construtor da classe Menu.
    Menu();

    /// @brief Lista as atividades disponíveis para um jogador.
    /// @param p Ponteiro para o jogador.
    void listarAtividades(Player *p, Sistema *sistema);

    // Métodos comentados para remoção temporária
    // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // virtual void findOne(char const *data);

private:
    // std::ifstream _file;
};

// Cabeçalho comentado para remoção temporária
// #include "StorageManager.tpp"

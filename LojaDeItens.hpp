// LojaDeItens.hpp

#pragma once
#include <map>
#include <string>
#include "Item.hpp"
#include "Player.hpp"

/// @brief Classe que representa uma loja de itens no jogo
class LojaDeItens
{
public:
    /// @brief Construtor da loja de itens
    /// @param player Ponteiro para o jogador que irá interagir com a loja
    LojaDeItens(Player* player);

    /// @brief Adiciona um novo item à loja
    /// @param id ID do item
    /// @param nome Nome do item
    /// @param preco Preço unitário do item
    /// @param status Status do item (ativo/inativo)
    void adicionarItem(int id, std::string nome, double preco, bool status);

    /// @brief Remove um item da loja com base no ID
    /// @param id ID do item a ser removido
    void removerItem(int id);

    /// @brief Altera o preço de um item na loja
    /// @param id ID do item
    /// @param novoPreco Novo preço do item
    void alterarPrecoItem(int id, double novoPreco);

    /// @brief Altera o status (ativo/inativo) de um item na loja
    /// @param id ID do item
    void alterarStatusItem(int id);

    /// @brief Exibe todos os itens disponíveis na loja
    void exibirItens();

    /// @brief Permite que o jogador compre um item na loja
    /// @param id ID do item a ser comprado
    void comprarItem(int id);

    /// @brief Permite que o jogador venda um item à loja
    /// @param id ID do item a ser vendido
    void venderItem(int id);

private:
    Player* _player; ///< Ponteiro para o jogador
    std::map<int, Item*> _itens; ///< Mapa de itens disponíveis na loja
};

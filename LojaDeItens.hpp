#pragma once
#include <map>
#include <string>
#include "Item.hpp"

class LojaDeItens
{
public:
    LojaDeItens();
    void adicionarItem(int id, std::string nome, double preco, bool status);
    void removerItem(int id);
    void alterarPrecoItem(int id, double novoPreco);
    void alterarStatusItem(int id);
    void exibirItens();
    void comprarItem(int id);
    void venderItem(int id);

private:
    std::map<int, Item*> _itens;
};

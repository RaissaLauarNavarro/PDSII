#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"

#include "Inventory.hpp"
#include "Inventory.cpp"
#include "Item.hpp"
#include "Item.cpp"
#include "Player.hpp"
#include "Player.cpp"
#include "Menu.hpp"
#include "Menu.cpp"
#include "Farmer.hpp"
#include "Farmer.cpp"
#include "Livestocker.hpp"
#include "Livestocker.cpp"
#include "Fisherman.hpp"
#include "Fisherman.cpp"
#include "Miner.hpp"
#include "Miner.cpp"
#include "LojaDeItens.hpp"

TEST_CASE("Mostrar Menu"){
    Player p;
    Menu menu;
    menu.listarAtividades(&p);
}

TEST_CASE("Obter trigo e cenoura"){
    Player p;
    Farmer farmer;
    // Fisherman fisherman;
    // Miner miner;
    // Livestocker livestocker;

    CHECK_FALSE(p.getInventory()->hasItem(1, 1));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    CHECK_FALSE(p.getInventory()->hasItem(2, 2));
    CHECK_FALSE(p.getInventory()->hasItem(3, 1));
    farmer.getWheat(1, &p);
    farmer.getCarrot(2, &p);
    CHECK(p.getInventory()->hasItem(2, 1));
    CHECK(p.getInventory()->hasItem(3, 2));
}


TEST_CASE("Funções de mdificação de valores"){
    SUBCASE("Limpar Peixes"){
        Player p;
        Fisherman fisherman;
        p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
        p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
        fisherman.cleanFish(&p);
        p.getInventory()->printInventory();
         std::cout << std::endl;
        // deve altera os valores, adicionando 10%
    }
    SUBCASE("Limpar Peixes 2 vezes"){
        Player p;
        Fisherman fisherman;
        p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
        p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
        fisherman.cleanFish(&p);
        p.getInventory()->printInventory();
        fisherman.cleanFish(&p);
        p.getInventory()->printInventory();
         std::cout << std::endl;
        // não deve alterar os valores da 2 vez
    }
    SUBCASE("Refinar minérios"){
        Player p;
        Miner miner;
        p.getInventory()->insert(204, Item(204, "Esmeralda", 20.00, 0));
        p.getInventory()->insert(204, Item(204, "Esmeralda", 20.00, 0));
        miner.refine(&p);
        p.getInventory()->printInventory();
        std::cout << std::endl;
        // deve altera os valores, adicionando 10%
    }
    SUBCASE("Refinar minérios 2 vezes"){
        Player p;
        Miner miner;
        p.getInventory()->insert(204, Item(204, "Esmeralda", 20.00, 0));
        p.getInventory()->insert(204, Item(204, "Esmeralda", 20.00, 0));
        miner.refine(&p);
        p.getInventory()->printInventory();
        miner.refine(&p);
        p.getInventory()->printInventory();
        std::cout << std::endl;
        // não deve alterar os valores da 2 vez
    }
}

TEST_CASE("Testes items storage")
{
    ItemsStorage Storage("./Itens.txt");
    Item trigo = Storage.findByName("Trigo");
    CHECK_EQ(trigo.getId(), 1);
    CHECK_EQ(trigo.getName(), "Trigo");
    CHECK_EQ(trigo.getUnitaryPrice(), 1.00);
    CHECK_FALSE(trigo.getStatus());
    CHECK_THROWS_WITH(Storage.findByName("ITEM RAMDÔMICO INEXISTENTE"), "Item inexistente");
    // MATEUS: Não consegui pensar em uma forma eficaz de criar um teste unitário pra nossa função
    // de busca aleatória. Depois de algumas pesquisas vi a sugestão usar uma seed padrão mas como nossa
    // implementação usa a "distribuição discreta" com probabilidades próprias, não seria possível usar isso;
    //@brief Faz-se necessário testes para as funções.
}


TEST_CASE("LojaDeItens - Compra e Venda") {
    ///@brief Faz-se necessário testes para mais itens
    Player player(40);  // Jogador com $40 
    Inventory inventory;  // Inventário vazio
    std::vector<Item> items;  // Lista de itens vazia

    // Adicionando alguns itens à loja para testes
    items.emplace_back(1, "Bacon", 5);
    items.emplace_back(2, "Ovo", 3);

    LojaDeItens loja(&player, &inventory, &items);

    SUBCASE("Compra Básica") {
        loja.exibirItens();
        loja.comprarItem();
        CHECK(player._money == 35);
        REQUIRE(player.inventory.size() == 1);
        CHECK(player.inventory[0]._id == 1);
    }

    SUBCASE("Compra com Dinheiro Insuficiente") {
        player._money = 2;
        loja.exibirItens();
        loja.comprarItem();
        CHECK(player._money == 2);
        REQUIRE(player.inventory.empty());
    }

    SUBCASE("Venda Básica") {
        player._money = 10;
        player.inventory.remove(Item(1, "Bacon", 5));
        loja.exibirItens();
        loja.venderItem();
        CHECK(player._money == 15);
        REQUIRE(player.inventory.empty());
    }

    SUBCASE("Venda com Inventário Vazio") {
        player.inventory.clear();
        loja.exibirItens();
        loja.venderItem();
        CHECK(player._money == 15);
        REQUIRE(player.inventory.empty());
    }

    SUBCASE("Compra e Venda Múltiplas") {
        player._money = 40 ;
        player.inventory.clear();
        loja.exibirItens();
        loja.comprarItem();
        loja.venderItem();
        CHECK(player._money == 37);
        REQUIRE(player.inventory.empty());
    }
}

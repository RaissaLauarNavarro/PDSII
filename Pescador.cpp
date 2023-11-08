#include <ctime>  
#include <cstdlib>

#include "Item.hpp"
#include "Inventario.hpp"

Item Pescar(){
    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    // Assim, ocorre um sorteio do peixe a ser pescado
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand();

}

Inventario LimparPeixes(inventario){
    for (const auto& pair : inventario){
        Item item = pair.second;
        if(item._nome == "PEIXE" && item._status == 0){
            item._preco *= 0.1;
            item.status = 1;
        }
    }
}
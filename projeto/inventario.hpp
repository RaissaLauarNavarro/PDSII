#include <iostream>

class Inventario {

    friend class Jogador;

    public:
        int AdicionarItem();
        int RemoverItem();
        int AlterarItem();
    private:
        // estrutura de dado do inventrario
};
#include <iostream>

class Animal{
    public:
        int Alimentar();
        int Reproduzir();

    private:
        std::string tipo;
        bool _alimentado;
        int quantidade;
};
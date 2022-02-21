#include "imprimeErros.hpp"


extern std::vector<char> chutesErrados;

//imprime chutes errados
void imprimeErros()
{
    std::cout << "Chutes Errados: ";
    for (char letra : chutesErrados)
    {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}
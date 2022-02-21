#include "imprimePalavra.hpp"

extern std::string palavraSecreta;
extern std::map<char, bool> chutou;

//mecanica de imprimir underscore e chute certo
void imprimePalavra()
{
    for (char letra : palavraSecreta)
    {
        if (chutou[letra])
        {
            std::cout << letra << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

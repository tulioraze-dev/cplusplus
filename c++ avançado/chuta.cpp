#include "chuta.hpp"


extern std::map<char, bool> chutou;
extern std::vector<char> chutesErrados;

//mecanica de receber chute e trata-lo
void chuta()
{
    char chute;
    std::cin >> chute;
    chutou[chute] = true;
    std::cout << "Seu chute foi: " << chute << std::endl;

    if (letra_existe(chute))
    {
        std::cout << "Você acertou! Seu chute está na palavra" << std::endl;
    }
    else
    {
        std::cout << "Você errou! Seu chute não esta na palavra secreta" << std::endl;
        chutesErrados.push_back(chute);
    }
}
#include "letra_existe.hpp"


extern std::string palavraSecreta;

//FUNÇÃO QUE COMPARA CHUTE
bool letra_existe(char chute)
{
    for (char letra : palavraSecreta)
    {
        if (chute == letra)
        {
            return true;
        }
    }
    return false;
}
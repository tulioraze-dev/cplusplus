#include "naoAcertou.hpp"


extern std::map<char, bool> chutou;
extern std::string palavraSecreta;

//Função que compara o que foi chutado com a palavra secreta
bool naoAcertou()
{
    for (char letra : palavraSecreta)
    {
        if (!chutou[letra])
        {
            return true;
        }
    }
    return false;
}
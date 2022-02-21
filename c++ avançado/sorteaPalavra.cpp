#include "sorteaPalavra.hpp"


extern std::string palavraSecreta;

//Sorteia a palavra do texto e declara a palavra sorteada como a PALAVRA SECRETA
void sorteaPalavra()
{
    std::vector<std::string> palavras = leArquivo();

    srand(time(0));
    int indiceSorteado = rand() % palavras.size();

    palavraSecreta = palavras[indiceSorteado];
}
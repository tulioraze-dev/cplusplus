#include "adicionaPalavra.hpp"


//adiciona uma nova palavra ao banco de palavras
void adicionaPalavra()
{
    std::cout << "Digite a nova palavra em letras MAIUSCULAS: " << std::endl;
    std::string novaPalavra;
    std::cin >> novaPalavra;

    std::vector<std::string> listaPalavras = leArquivo();
    listaPalavras.push_back(novaPalavra);

    salvaArquivo(listaPalavras);
}
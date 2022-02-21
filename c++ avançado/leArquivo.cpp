#include "leArquivo.hpp"


//ler um aquivo e recebe uma palavra dele "PALAVRAS.txt"    
std::vector<std::string> leArquivo()
{
    std::ifstream arquivo;
    arquivo.open("PALAVRAS.TXT");

    if (arquivo.is_open())
    {
        int quantidadeDePalavras;
        arquivo >> quantidadeDePalavras;

        std::vector<std::string> palavraDoAquivo;

        for (int i = 0; i < quantidadeDePalavras; i++)
        {
            std::string palavraLida;
            arquivo >> palavraLida;
            palavraDoAquivo.push_back(palavraLida);
        }
        arquivo.close();
        return palavraDoAquivo;
    }
    else
    {
        std::cout << "Não foi possivel acessar o banco de palavras" << std::endl;
        exit(0);
    }
}

#include "salvaArquivo.hpp"


//Salva a nova Palavra no aquivo
void salvaArquivo(std::vector<std::string> novaLista)
{
    std::ofstream arquivo;
    arquivo.open("PALAVRAS.TXT");
    if(arquivo.is_open())
    {
        arquivo << novaLista.size() <<std:: endl;

        for(std::string palavra : novaLista)
        {
            arquivo << palavra << std::endl;
        }
        arquivo.close();
    }
    else
    {
        std::cout << "Não foi possível acessar  o banco de palavras" << std::endl;
        exit(0);
    }
}

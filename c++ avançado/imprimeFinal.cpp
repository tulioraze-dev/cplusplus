#include "imprimeFinal.hpp"

extern std::string palavraSecreta;

//imprime mensagem de saida
void imprimeFinal()
{
    std::cout << "** FIM DE JOGO **" << std::endl;
    std::cout << "A Palavra Secreta era : " << palavraSecreta << std::endl;
    if (naoAcertou())
    {
        std::cout << "Você Perdeu !! Tente novamente!! " << std::endl;
    }
    else
    {
        std::cout << "Parabéns você acertou a Palavra Secreta !!!" << std::endl;

        std::cout << "Você deseja adcionar uma nova palavra ao banco ? (S/N)" << std::endl;
        char resposta;
        std::cin >> resposta;
        if(resposta == 'S')
        {
            adicionaPalavra();
        }
    }
}
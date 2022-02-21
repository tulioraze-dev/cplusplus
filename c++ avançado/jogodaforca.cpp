#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include "imprimeCabecalho.hpp"
#include "leArquivo.hpp"
#include "sorteaPalavra.hpp"
#include "adicionaPalavra.hpp"
#include "chuta.hpp"
#include "imprimeErros.hpp"
#include "imprimeFinal.hpp"
#include "imprimePalavra.hpp"
#include "letra_existe.hpp"
#include "naoAcertou.hpp"
#include "naoEnforcou.hpp"
#include "salvaArquivo.hpp"
using namespace std;


string palavraSecreta ;
map<char, bool> chutou;
vector<char> chutesErrados;

int main()
{
    SetConsoleOutputCP(65001);

    imprimeCabecalho();

    leArquivo();

    sorteaPalavra();

    while (naoAcertou() && naoEnforcou())
    {
        cout << "Chute uma letra: ";
        cout << endl;

        imprimePalavra();

        chuta();

        imprimeErros();
    }

    imprimeFinal();
}
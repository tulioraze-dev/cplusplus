#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;

string palavraSecreta = "MELANCIA";
map<char, bool> chutou;
vector<char> chutesErrados;

//imprime cabeçalho do Jogo
void imprimeCabecalho()
{
    cout << "*****************" << endl;
    cout << "* JOGO DA FORCA *" << endl;
    cout << "*****************" << endl;
    cout << endl;
}

//ler um aquivo e recebe uma palavra dele "PALAVRAS.txt"
vector<string> leArquivo()
{
    ifstream arquivo;
    arquivo.open("PALAVRAS.TXT");

    if (arquivo.is_open())
    {
        int quantidadeDePalavras;
        arquivo >> quantidadeDePalavras;

        vector<string> palavraDoAquivo;

        for (int i = 0; i < quantidadeDePalavras; i++)
        {
            string palavraLida;
            arquivo >> palavraLida;
            palavraDoAquivo.push_back(palavraLida);
        }
        arquivo.close();
        return palavraDoAquivo;
    }
    else
    {
        cout << "Não foi possivel acessar o banco de palavras" << endl;
        exit(0);
    }
}

//Sorteia a palavra do texto e declara a palavra sorteada como a PALAVRA SECRETA
void sorteaPalavra()
{
    vector<string> palavras = leArquivo();

    srand(time(0));
    int indiceSorteado = rand() % palavras.size();

    palavraSecreta = palavras[indiceSorteado];
}

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

//funçao que limita a quantidade de chutes errados
bool naoEnforcou()
{
    return chutesErrados.size() < 5;
}

//imprime chutes errados
void imprimeErros()
{
    cout << "Chutes Errados: ";
    for (char letra : chutesErrados)
    {
        cout << letra << " ";
    }
    cout << endl;
}

//mecanica de imprimir underscore e chute certo
void imprimePalavra()
{
    for (char letra : palavraSecreta)
    {
        if (chutou[letra])
        {
            cout << letra << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl;
}

//mecanica de receber chute e trata-lo
void chuta()
{
    char chute;
    cin >> chute;
    chutou[chute] = true;
    cout << "Seu chute foi: " << chute << endl;

    if (letra_existe(chute))
    {
        cout << "Você acertou! Seu chute está na palavra" << endl;
    }
    else
    {
        cout << "Você errou! Seu chute não esta na palavra secreta" << endl;
        chutesErrados.push_back(chute);
    }
}

//imprime mensagem de saida
void imprimeFinal()
{
    cout << "** FIM DE JOGO **" << endl;
    cout << "A Palavra Secreta era : " << palavraSecreta << endl;
    if (naoAcertou())
    {
        cout << "Você Perdeu !! Tente novamente!! " << endl;
    }
    else
    {
        cout << "Parabéns você acertou a Palavra Secreta !!!" << endl;

        cout << "Você deseja adcionar uma nova palavra ao banco ? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S')
        {
            adicionaPalavra();
        }
    }
}

//adiciona uma nova palavra ao banco de palavras
void adicionaPalavra()
{
    cout << "Digite a nova palavra em letras MAIUSCULAS: " << endl;
    string novaPalavra;
    cin >> novaPalavra;

    vector<string> listaPalavras = leArquivo();
    listaPalavras.push_back(novaPalavra);

    salvaArquivo(listaPalavras);
}

//Salva a nova Palavra no aquivo
void salvaArquivo(vector<string> novaLista)
{
    ofstream arquivo;
    arquivo.open("PALAVRAS.TXT");
    if(arquivo.is_open())
    {
        arquivo << novaLista.size() << endl;

        for(string palavra : novaLista)
        {
            arquivo << palavra << endl;
        }
        arquivo.close();
    }
    else
    {
        cout << "Não foi possível acessar  o banco de palavras" << endl;
        exit(0);
    }
}

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
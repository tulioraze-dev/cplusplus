/* Programador: Tulio Rabelo Azevedo
data: 06/12/2021 hora: 15:00
curso de C++ */

#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;

const int NUMERO_SECRETO = rand() % 100;
int dificuldade;
int numerodeTentativas = 0;
int tentativas = 0;
double pontos = 1000.0;
bool nao_acertou = true;
int chute;
bool acertou = chute == NUMERO_SECRETO;
bool menor = chute < NUMERO_SECRETO;

//imprime saudações do jogo
void imprimeCabeçalho()
{
    cout << endl;
    cout << "***********************************" << endl;
    cout << "* Bem-Vindo ao Jogo de Advinhação *" << endl;
    cout << "***********************************" << endl;
    cout << endl;
}

//mecanica de escolha de dificuldade
void escolheDificuldade()
{
    //captura dificuldade
    cout << "Escolha o nivel de dificuldade" << endl;
    cout << "(1)- Fácil (2)- Médio (3)- Dificl" << endl;
    cin >> dificuldade;
}

//mecanica de limitação de chutes
void limitaChute()
{

    if (dificuldade == 1)
    {
        numerodeTentativas = 15;
    }
    else if (dificuldade == 2)
    {
        numerodeTentativas = 10;
    }
    else
    {
        numerodeTentativas = 6;
    }
}

//mecanica de captura de chutes
void capturaChute()
{
    cout << "Tentativa: " << tentativas << endl;
    cout << "Qual seu Chute?: ";
    cin >> chute;
    cout << "Seu chute foi: " << chute << endl;
}

void comparaChute()
{
    if (acertou)
    {
        nao_acertou = false;
        cout << "Parabéns, você Acertou!!" << endl;
        
    }
    else if (menor)
    {
        cout << "Chute foi MENOR que o Número Secreto" << endl;
    }
    else
    {
        cout << "Chute foi MAIOR que o Número Secreto" << endl;
    }
}

int main()
{
    srand(time(0));
    SetConsoleOutputCP(65001);
    cout.precision(2);
    cout << fixed;

    //cria numero aleatório

    imprimeCabeçalho();

    escolheDificuldade();

    limitaChute();

    for (tentativas = 1; tentativas <= numerodeTentativas; tentativas++)
    {

        capturaChute();

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos;

        comparaChute();
    }
    cout << "** FIM DE JOGO **" << endl;
    if (nao_acertou)
    {
        cout << "Voce Perdeu!! Tente Novamente" << endl;
    }
    else
    {
        cout << "Você acertou o Numero secreto em: " << tentativas << " tentativas !!!" << endl;
        cout << "Sua pontuação foi de: " << pontos << endl;
    }
}
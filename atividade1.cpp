/*Dev: Tulio Rabelo Azevedo
data: 08/12/2021 hora:16:02
atividade de sala*/


#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

//mecanica de encontrar o maior numero
void encontremaior()
{
    int numero1;
    int numero2;
    int numero3;

    int maior;

    cout << "Digite 3 números e descubra o maior" << endl;
    cout << "Digite o pirmeiro Número: " << endl;
    cin >> numero1;
    cout << "Digite o segundo Número: " << endl;
    cin >> numero2;
    cout << "Digite o terceiro Número: " << endl;
    cin >> numero3;

    if (numero1 > numero2)
    {
        maior = numero1;
    }
    else
    {
        maior = numero2;
    }
    if (maior < numero3)
    {
        maior = numero3;
    }
    cout << "O numero maior entre os 3 números é : " << maior << endl;
}

//Função que encontra a velocidade media
void encontraVelocidadeMedia()
{
    int metros;
    float minutos;
    int velocidademedia;
    float segundos;
    char resposta;

    cout << "Digite o a distancia percorrida em metros: " << endl;
    cin >> metros;
    cout << "Os dados de tempo são em metros ou segundos: (M)- Minutos (S)- Segundos " << endl;
    cin >> resposta;

    if (resposta == 'S' || resposta == 's')
    {
        cout << "Digite em quantos segundo a distancia foi percorrida: " << endl;
        cin >> segundos;

        minutos = segundos / 60.0;
    }
    else
    {
        cout << "Digite em quantos minutos a distancia foi percorrida: " << endl;
        cin >> minutos;
    }

    velocidademedia = metros / minutos;
    cout << "A velocidade média é de: " << velocidademedia << endl;
}

//Calcula o fatorial
void fatorial()
{
    int numero;

    cout << "Digite um número inteiro e descubra seu fatorial: " << endl;
    cin >> numero;

    int fatorial = numero;

    for (int i = 1; i < numero; i++)
    {
        fatorial = fatorial * (numero - i);
    }

    cout << "Seu Fatorial é: " << fatorial << endl;
}

int main()
{
    SetConsoleOutputCP(65001);
    int escolha;
    bool rodar = true;

    //menu de escolhas
    while(rodar)
    {
        cout << "Escolha sua opção " << endl;
        cout << "1 - Encontre o maior " << endl;
        cout << "2- Encontre a Velocidade Média " << endl;
        cout << "3- Fatorial" << endl;
        cout << "4- Sair " << endl;
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            encontremaior();
            break;
        case 2:
            encontraVelocidadeMedia();
            break;
        case 3:
            fatorial();
            break;
        default:
            rodar = false;
            break;
        }
    }
}

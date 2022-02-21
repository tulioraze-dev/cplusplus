#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;

#define TAM_MAX 10

int main(){
    SetConsoleOutputCP(65001);

    double Vet1[TAM_MAX], Vet2[TAM_MAX], Copia[TAM_MAX*2];

    for(int i = 0; i < TAM_MAX; i++){
        Copia[i] = Vet1[i];
    }
    for(int i = 0; i < TAM_MAX; i++){
        Copia[i+TAM_MAX] = Vet2[i];
    }

    cout << Copia[TAM_MAX];
}
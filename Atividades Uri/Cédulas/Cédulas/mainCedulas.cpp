#include <iostream>

using namespace std;

int main()
{
	/*
	int valor;
	int resto;

	cin >> valor;

	cout << valor << endl;

	cout << valor / 100 << " nota(s) de R$ 100,00" << endl;

	resto = (valor % 100);

	cout << resto / 50 << " nota(s) de R$ 50,00" << endl;

	resto = resto % 50;

	cout << resto / 20 << " nota(s) de R$ 20,00" << endl;

	resto = resto % 20;

	cout << resto / 10 << " nota(s) de R$ 10,00" << endl;

	resto = resto % 10;

	cout << resto / 5 << " nota(s) de R$ 5,00" << endl;

	resto = resto % 5;

	cout << resto / 2 << " nota(s) de R$ 2,00" << endl;

	resto = resto % 2;

	cout << resto / 1 << " nota(s) de R$ 1,00" << endl;*/

	int qntNotas[] = { 0,0,0,0,0,0,0};
	int valorCedulas[] = { 100,50,20,10,5,2,1 };

	int valor;
	cin >> valor;

	cout << valor << endl;

	for (int i = 0; i < 7; i++)
	{
		qntNotas[i] = valor / valorCedulas[i];
		valor = valor % valorCedulas[i];
		cout << qntNotas[i] << " nota(s) de R$ " << valorCedulas[i] << ",00" << endl;
	}

}

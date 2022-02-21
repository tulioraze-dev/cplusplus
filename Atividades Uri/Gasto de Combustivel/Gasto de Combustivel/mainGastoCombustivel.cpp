#include <iostream>

using namespace std;

int main()
{
	double velocidadeMedia;
	cin >> velocidadeMedia;

	double tempoGasto;
	cin >> tempoGasto;

	double distancidaPercorrida = velocidadeMedia * tempoGasto;
	
	double quantidadeDeLitros = distancidaPercorrida / 12;

	cout.precision(3);
	cout << fixed;

	cout << quantidadeDeLitros << endl;

}
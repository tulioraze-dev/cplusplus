#include <iostream>
#include <string>
using namespace std;



class Pessoa{

private:

string braco;
string perna;
string nome;
int passo=0;
int mordida=0;

public:
int get_andar();
void andar();
void comer();

};
int Pessoa::get_andar(){
return this->passo;
}
void Pessoa::andar(){
    passo++;
}

void Pessoa::comer(){
    mordida++;
}

int main(){

    Pessoa tulio;

tulio.andar();
tulio.andar();
tulio.andar();
tulio.andar();
tulio.andar();
tulio.andar();

    cout<<"Andando"<<tulio.get_andar()<<"ANDOU MT"<<endl;
}
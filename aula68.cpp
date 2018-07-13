#include <iostream>

using namespace std;

class Veiculo{
private:
    int velMax;
    int potencia;
public:
    int rodas;
    const char* nome;
protected:
    int portas;
    const char* cor;
};

class Carro:public Veiculo{
public:
    Carro(){
        //velMax=180;
        //potencia=150;
        rodas=4;
        nome="Carro";
        portas=4;
        cor="Vermelho";

        //cout << velMax << endl;
        //cout << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto{
public:
    Carro c;

    Moto(){
        //velMax=250;
        //potencia=500;
        c.rodas=2;
        c.nome="Moto";
        //portas=0;
        //cor="Preto";

        //cout << velMax << endl;
        //cout << potencia << endl;
        cout << c.rodas << endl;
        cout << c.nome << endl;
        //cout << portas << endl;
        //cout << cor << endl;
    }
};

int main() {

    Carro v1;
    cout << endl << endl;
    Moto v2;

	return 0;
}

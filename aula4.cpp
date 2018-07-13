#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    system("pause");
	//cin.get(); //substitui system(pause);
	setlocale(LC_ALL, "Portuguese");
	cout << "Alô mundo\n\n";

	//TIPO NOME;
	//TIPO NOME = VALOR;

	int vidas=0; //10, 25
	char letra='B'; //'B'
	double decimal=5.2; //2.49999999
	float decimal2=5.2; //2.5
	bool vivo=true; //true=verdadeiro / false=falso
	string nome="Bruno"; //"Bruno"

	/* */
	//

	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;

	//vidas=100;

	cout <<"\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nVivo: " << vivo << "\nNome: " << nome << "\n";



	return 0;
}

#include <iostream>
using namespace std;

int n1,n2; //Variáveis Globais

int main(){
	
	//Operadores Matemáticos: + - / * % ()
		
	int n3,n4; //Variáveis Locais
	int res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1=n1/n2;
	res2=n1%n2; 
	
	cout << "Divis: " << res1 << "\n";
	cout << "Resto: " << res2 << "\n\n";
	
	return 0;
}

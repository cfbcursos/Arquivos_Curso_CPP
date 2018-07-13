#include <iostream>

using namespace std;

int main() {

    //(expressão) ? valor1 : valor2;

    int n1,x;

    x=5;

    cout << "Digite um valor: ";
    cin >> n1;


    (n1 >= 10) ? x++ : x--;

    cout << "\nNovo valor do X: " << x << "\n";

	return 0;

}

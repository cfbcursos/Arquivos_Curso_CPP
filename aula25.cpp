#include <iostream>

using namespace std;

void contador(int num, int cont=0);

int main() {

    contador(10);

	return 0;

}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num > cont){
        contador(num,++cont);
    }
}

4! = 4*3*2*1
8! = 8*7*6*5*4*3*2*1

0,1,1,2,3,5,8,13...

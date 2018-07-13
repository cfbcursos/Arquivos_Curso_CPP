#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p=&vetor[0]; //p=vetor;
    *p=10; // vetor[0]=10;
    cout << "\n" << vetor[0] << "\n";

    *(p+=1);
    *p=20; //vetor[1]=20;
    cout << "\n" << vetor[1] << "\n";

    *(p+=1);
    *p=30; //vetor[2]=30;
    cout << "\n" << vetor[2] << "\n";

	return 0;

}

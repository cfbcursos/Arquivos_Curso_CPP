#include <iostream>
#include <stack> //PILHA - LIFO (Last-In-First-Out)

using namespace std;

int main(){

    stack<int>pilha1,pilha2;

    pilha2.push(10);
    pilha2.push(20);
    pilha2.push(30);
    pilha2.push(40);
    pilha2.push(50);
    pilha2.emplace(60);

    pilha2.swap(pilha1);

    cout << "Numero de elementos da pilha " << pilha1.size() << endl;

    while(!pilha1.empty()){
        cout << pilha1.top() << endl;
        pilha1.pop();
    }

    if(pilha1.empty()){
        cout << "Pilha vazia" << endl;
    }else{
        cout << "Pilha contem elementos" << endl;
    }

    cout << "Numero de elementos da pilha " << pilha1.size() << endl;

	return 0;
}

#include <iostream>

using namespace std;

void somador(){
    static auto i=0;
    i++;
    cout << i << endl;
}

int main(){

    somador();
    somador();
    somador();
    somador();
    somador();
    somador();

	return 0;
}

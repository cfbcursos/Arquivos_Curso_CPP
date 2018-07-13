#include <iostream>
#include <typeinfo>

using namespace std;

class CFBCURSOS{
};

int main() {

    if(typeid(int).before(typeid(double))){
        cout << "int vem antes de double" << endl;
    }else{
        cout << "double vem antes de int" << endl;
    }


	return 0;
}

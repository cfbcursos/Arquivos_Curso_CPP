#include <iostream>
#include <memory>

class Carro{
public:
    int vel=0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
        this->vel=v;
    }
};

using namespace std;

int main() {

    unique_ptr<Carro>c1(new Carro);
    c1->setVel(10);
    cout << "Velocidade c1: " << c1->getVel() << endl;

	return 0;
}

#include <iostream>

using namespace std;

class Aviao{

public:
    int vel=0;
    int velMax;
    string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp){//1=Jato, 2=Monomotor, 3=Planador
    if(tp==1){
        this->velMax=800;
        this->tipo="Jato";
    }else if(tp==2){
        this->velMax=350;
        this->tipo="Monomotor";
    }else if(tp==3){
        this->velMax=180;
        this->tipo="Planador";
    }
}

int main() {

    Aviao *av1=new Aviao();
    Aviao *av2=new Aviao();

    av1->ini(1);
    av2->ini(2);

    cout << av1->velMax << endl;
    cout << av2->velMax;

	return 0;

}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {


    int tam=10,num;
    int *vetor;

    //vetor=(int*)calloc(tam,sizeof(int));
    vetor=(int*)malloc(sizeof(int));

    srand(time(NULL));

    for(int i=0;i<tam;i++){
        vetor[i]=rand()%100;
        cout << vetor[i] << endl;
    }

    free(vetor);

	return 0;
}

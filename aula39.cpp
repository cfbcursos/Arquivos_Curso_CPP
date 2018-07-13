#include <iostream>
#include <stdio.h> //Para função gets
#include <stdlib.h> //Para função malloc

using namespace std;

int main(){

    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);

    cout << vnome;

	return 0;
}

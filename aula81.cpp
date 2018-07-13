#include <iostream>
#include <cctype> //ctype.h

using namespace std;

int main(){

    char str[]="cfb-cursos";
    char c;
    int i;

    i=0;
    while(str[i]){
        c=str[i];
        putchar(toupper(c)); //tolower
        i++;
    }

	return 0;
}

/*
isalnum
isalpha
isspace
iscntrl \n
isdigit
islower
isprint \n
ispunct ,.?
isupper
isxdigit
*/

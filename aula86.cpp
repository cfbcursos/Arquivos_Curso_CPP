#include <iostream>
#include <string>

using namespace std;

int main(){

    string txt1("18"),txt2;
    int ano=2018,res;

    res=ano-stoi(txt1);

    txt2=to_string(res);

    cout << txt2 << endl;

    /*
    stol
    stoll
    stoul
    stoull
    stof
    stod
    stold

    */

	return 0;
}

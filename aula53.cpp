#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};

    for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++){
        cout << *it << endl;
    }

	return 0;
}

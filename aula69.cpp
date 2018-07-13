#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int>num={9,1,8,2,7,3,6,4,5};
    auto it=find(num.begin(),num.end(),2);
    if(it!=num.end()){
        cout << "Numeral encontrado " << *it << endl;
    }else{
        cout << "Numeral NAO encontrado" << endl;
    }

	return 0;
}

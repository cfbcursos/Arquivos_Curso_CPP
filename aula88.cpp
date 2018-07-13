#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>vct1={0,1,2,3,4};
    vector<int>vct2={5,6,7,8,9};

    vct1.emplace_back(9);

    for(auto x:vct1){
        cout << x << endl;
    }


	return 0;
}

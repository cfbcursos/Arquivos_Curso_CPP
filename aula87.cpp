#include <iostream>
#include <array>

using namespace std;

int main(){

    array<int,10>vt={2,4,6,8,0,1,3,5,7,9};
    array<int,10>cfb;

    cfb.fill(5);

    vt.swap(cfb);

    for(auto x:cfb){
        cout << x << " - ";
    }
    cout << endl;
    for(auto x:vt){
        cout << x << " - ";
    }
    cout << endl;

    return 0;
}

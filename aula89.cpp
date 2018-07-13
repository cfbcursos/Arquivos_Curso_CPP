#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int>lst1={0,1,2,3,4};
    list<int>lst2={5,6,7,8,9};

    lst1.merge(lst2);
    lst1.reverse();

    for(auto x:lst1){
        cout << x << "   ";
    }

	return 0;
}

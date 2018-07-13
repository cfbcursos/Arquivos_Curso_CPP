#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int,string>prod;
    map<int,string>::iterator itmap;

    prod.insert(pair<int,string>(0,"Mouse"));
    prod.insert(pair<int,string>(1,"Teclado"));
    prod.insert(pair<int,string>(2,"Monitor"));
    prod.insert(pair<int,string>(3,"Cx.Som"));
    prod.insert(pair<int,string>(4,"Microfone"));
    prod.insert(pair<int,string>(5,"Gabinete"));
    prod.insert(pair<int,string>(6,"Camera"));

    //prod.erase(30);
    //prod.clear();

    //prod.erase(prod.find(1),prod.find(6));

    for(auto it:prod){
        cout << it.first << " - " << it.second << endl;
    }

    /*
    itmap=prod.find(2);
    if(itmap==prod.end()){
        cout << "Produto nao encontrado" << endl;
    }else{
        cout << "Produto em estoque" << endl;
        cout << "Codigo:" << itmap->first << " - Produto:" << itmap->second << endl;
    }
    */



	return 0;
}

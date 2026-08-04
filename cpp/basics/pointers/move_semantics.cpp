#include<iostream>
using namespace std;

// std::move allows to steal or adopt the value

int main () {
    string str = "Vikas";
    string st = "";
    
    cout<<"old string: "<<str<<endl;
    cout<<"new string: "<<st<<endl;

    st = move(str);

    cout<<"old string: "<<str<<endl;
    cout<<"new string: "<<st<<endl;

    // Can be used in games to steal loot from players.

}
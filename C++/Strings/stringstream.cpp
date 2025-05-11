#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main () {
    string str;
    cout<<"Please enter the string: ";
    getline(cin,str);
    stringstream st(str);
    string temp;
    while(st>>temp) {
        cout<<temp<<endl;
    }
}
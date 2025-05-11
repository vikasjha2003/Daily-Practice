#include<iostream>
#include<string>
using namespace std;
int main () {
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int l = str.size();
    cout<<str.substr(l/2);
}
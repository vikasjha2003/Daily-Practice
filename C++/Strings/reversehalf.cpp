#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string str;
    getline(cin,str);
    int l = str.size();
    reverse(str.begin(),str.begin()+(l/2));
    cout<<str;

}
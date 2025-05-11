#include<iostream>
#include<string>
using namespace std;
int main () {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int l = str.size();
    int count = 0;
    for(int i = 0; i<l; i++) {
        if(str[i+1]==str[i]) count++;
    }
    cout<<count;
}
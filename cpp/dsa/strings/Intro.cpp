#include<iostream>
using namespace std;
int main () { //implementing string as an array of characters
    char st[5] = {'a','e','\0','o','u'};
    cout<<st<<endl;
    char str[] = "aeiou";
    for(int i = 0; str[i]!='\0';i++ ) cout<<str[i];
    cout<<endl;
    char stri[7] = "birend";
    for(int i = 0; i<7; i++) {
        cout<<stri[i];
    }
}
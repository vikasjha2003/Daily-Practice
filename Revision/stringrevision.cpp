#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {

    // array initialisation and input output

    char s[10] = "BirenderJ";
    cout<<s<<endl;
    // for(int i = 0; s[i]!='\0'; i++) {
    //     cin>>s[i];
    // }
    // cout<<s;
    char si[5] = {'a','e','\0','i','o'};
    cout<<si<<endl;

    // string initialisation

    string str;
    //cin>>str; // sirf space ke pahle wala store hoga
    getline(cin,str); // better way to take input
    cout<<str<<endl;

    // stringstream

    stringstream stri(str);
    string temp;
    while(stri>>temp) {
        cout<<temp;
    }
    // remaining operations can be revised from notes
}
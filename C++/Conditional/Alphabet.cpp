#include<iostream>
using namespace std;
int main () {
    // a-z = 97-122
    // A-Z = 65-90
    char c;
    cout<<"Please enter the character value : ";
    cin>>c;
    int a = (int)c;
    if (a>=65 && a<=90 || a>=97 && a<=122) {
        cout<<c<<" is an alphabet.";
    }    
    // } else if (a>=97 && a<=122) {
    //     cout<<c<<" is an alphabet.";
    // } 
    else {
        cout<<c<<" is not an alphabet.";
    }
    return 0;
}
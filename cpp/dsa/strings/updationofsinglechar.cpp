#include<iostream>
#include<string>
using namespace std;
int main () {
    int n;
    cout<<"Enter the length of string: ";
    cin>>n;
    // string s[n]   yeh galat ho jayega, address print
    char st[n];
    cout<<"Please enter the string: ";
    for(int i=0; i<n; i++) {
        cin>>st[i];
    }
    cout<<st;
    for(int i = 0; i<n; i++) {
        if(i%2==0) {
            st[i] = 'a';
        }
    }
    cout<<endl<<st;
    // st[1]='u';   possible in cpp but not possible in java
    // cout<<st;
    return 0;
}
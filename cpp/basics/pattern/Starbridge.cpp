#include<iostream>
using namespace std;
int main () {
     int i, j, n;
     cout<<"Please enter the value of n : ";
     cin>>n;
     for(j=1; j<=(2*n-1); j++) {
        cout<<"*";
     } cout<<endl;
     for(i=1; i<=(n-1); i++) {
        for(j=(n-i); j>=1; j--) {
            cout<<"*";
        }
        for(j=1; j<=(2*i-1); j++) {
            cout<<" ";
        }
        for(j=(n-i); j>=1; j--) {
            cout<<"*";
        } cout<<endl;
     } return 0;
}
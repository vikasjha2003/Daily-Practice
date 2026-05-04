#include<iostream>
using namespace std;
int main () {
    int i, j, n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if(j<(n-i+1)) {
                cout<<" ";
            } else cout<<"*";
        } cout<<endl;
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for (j=1; j<=i; j++) {
            cout<<"*";
        } cout<<endl;
    }
}
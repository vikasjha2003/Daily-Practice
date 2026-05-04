#include<iostream>
using namespace std;
int main () {
    int i, j, n, nsp, nst;
    // nsp= no. of space
    // nst= no. of stars
    cout<<"Enter value of n : ";
    cin>>n;
    nsp = n-1;
    nst = 1;
    for(i=1; i<=n; i++) {
        for(j=1; j<=nsp; j++) {
            cout<<" ";
        }
        for(j=1; j<=nst; j++) {
            cout<<"*";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    }
    // for (i=1; i<=n; i++) {
    //     for (j=1; j<=n-i; j++) {
    //         cout<<" ";            
    //     }
    //     for (j=1; j<=(2*i-1); j++) {
    //         cout<<"*";
    //     } cout<<endl;
    // } return 0;
}
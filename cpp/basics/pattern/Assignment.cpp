#include<iostream>
using namespace std;
int main () {
    int n, i, j, m, nsp, nst;
    cout<<"Please Enter tthe value of n : ";
    cin>>n;
    cout<<"Please enter the value of m : ";
    cin>>m;
    // for(i=1; i<=n; i++) {
    //     for(j=1; j<=(n-i+1); j++) {
    //         cout<<j;
    //     } cout<<endl;
    // }
    // 
    // for(i=1; i<=n; i++) {
    //     for(j=0; j<=i; j++) {
    //         if(i%2==0) {
    //             cout<<(j+1);
    //         } else {
    //             cout<<(char)(j+65);
    //         }
    //     } cout<<endl;
    // }

    // for(i=1; i<=(2*n-1); i++) {
    //     if(i<=4) h++;
    //     else h--;
    //     for(j=1; j<=h; j++) {
    //         cout<<"*";
    //     } cout<<endl;
    // }

    // for(i=1; i<=n; i++) {
    //     for(j=1; j<=m; j++) {
    //         if(i==1 || j==1 || i==n || j==m) {
    //             cout<<"*";
    //         } else {
    //             cout<<" ";
    //         }
    //     } cout<<endl;
    // }

    // nsp=n-i;
    // nst=4;
    // for(i=1; i<=n; i++) {
    //     for(j=1; j<=nsp; j++) {
    //         cout<<" ";
    //     } nsp--;
    //     for(j=1; j<=nst; j++) {
    //         cout<<"*";
    //     } cout<<endl;
    // }

    // for(i=1; i<=n; i++) {
    //     for (j=1; j<=n-i; j++) {
    //         cout<<" ";
    //     }
    //     for (j=1; j<=i; j++) {
    //         cout<<(char)(j+64);
    //     } cout<<endl;
    // }

    for(i=1; i<=n; i++) {
        for(j=i; j>=1; j--) {
            cout<<j;
        } cout<<endl;
    }
}
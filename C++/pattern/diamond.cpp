#include<iostream>
using namespace std;
int main () {
    int i, j, n, nsp, nst;
    cout<<"Enter the value of n : ";
    cin>>n;
    nsp = n-1;
    nst = 1;
    // for (i=1; i<=n; i++) {
    //     for(j=1; j<=nsp; j++) {
    //         cout<<" ";
    //     } nsp--;
    //     for(j=1; j<=nst; j++) {
    //         cout<<"*";
    //     } nst += 2; 
    //     cout<<endl;
    // }
    // for (i=n; i>=1; i--) {
    //     nsp++;
    //     for(j=1; j<=(nsp+1); j++) {
    //         cout<<" ";
    //     }
    //     nst -= 2;
    //     for(j=1; j<=(nst-2); j++) {
    //         cout<<"*";
    //     }  
    //     cout<<endl;
    // }



    // for(i=1; i<=(2*n-1); i++) {
    //     if(i<=n) {
    //         for(j=1; j<=nsp; j++) {
    //             cout<<" ";
    //         } nsp--;
    //     for(j=1; j<=nst; j++) {
    //             cout<<"*";
    //         } nst += 2; 
    //     } else {
    //         nsp++;
    //         for(j=1; j<=(nsp+1); j++) {
    //             cout<<" ";
    //         }
    //         nst -= 2;
    //         for(j=1; j<=(nst-2); j++) {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(i=1; i<=(2*n-1); i++) {
        for(j=1; j<=nsp; j++) {
            cout<<" ";
        }
        if(i<=n-1) {
            nsp--;
        } else {
            nsp++;
        }
        for(j=1; j<=nst; j++) {
            cout<<"*";
        }
        if(i<=n-1) {
            nst+=2;
        } else {
            nst-=2;
        } cout<<endl;
    }

    // for(i=1; i<=n; i++) {
    //     for(j=1; j<=(n-i+1); j++) {
    //         cout<<" ";
    //     }
    //     for(j=1; j<=(2*i-1); j++) {
    //         cout<<"*";
    //     } cout<<endl;
    // }
    // for(i=n-1; i>=1; i--) {
    //     for(j=1; j<=(n-i+1); j++) {
    //         cout<<" ";
    //     }
    //     for(j=1; j<=(2*i-1); j++) {
    //         cout<<"*";
    //     } cout<<endl;
    // }
}
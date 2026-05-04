#include<iostream>
using namespace std;
int main () {
    int i, j, n, nsp;
    cout<<"Enter the value of n : ";
    cin>>n;
    nsp = n-1;
    for (i=1; i<=n; i++) {
        for (j=1; j<=nsp; j++) {
            cout<<" ";
        }
        nsp--;
        for (j=1; j<=i; j++) {
            cout<<j;
        }
        for(j=(i-1); j>=1; j--) {
            cout<<(j);
        } cout<<endl;
    }
}
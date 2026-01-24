#include<iostream>
using namespace std;
int main () {
    int i, j, n;
    cout<<"Please enter the value of n : ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if (j==i || j==(n-i+1)) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        } cout<<endl;
    }
}
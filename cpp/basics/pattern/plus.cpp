#include<iostream>
using namespace std;
int main () {
    int i, j, n;
    cout<<"Please enter no. of rows : ";
    cin>>n;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if (i==3 || j==3) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        } cout<<endl;
    }
}
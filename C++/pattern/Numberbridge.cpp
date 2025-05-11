#include<iostream>
using namespace std;
int main () {
    int i, j, n;
    cout<<"Please enter the value of n : ";
    cin>>n;
    for(i=1; i<=(2*n-1); i++) {
        cout<<i;
    } cout<<endl;
    for(i=1; i<=(n-1); i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<j;
        }
        for(j=1; j<=(2*i-1); j++) {
            cout<<" ";
        }
        for(j=5; j<=(2*n-i); j++) {
            cout<<j;
        } cout<<endl;
    }
}
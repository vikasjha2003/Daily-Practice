#include<iostream>
using namespace std;
int main () {
    int i, n, m, j;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    cout<<"Enter the no. of columns : ";
    cin>>m;
    for(i=1;i<=n;i++) {
        for(j=1; j<=m; j++) {
            cout<<"*";
        } cout<<endl;
    }
}
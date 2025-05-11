#include<iostream>
using namespace std;
int main () {
    int i, j, n;
    cout<<"Please enter the value of n : ";
    cin>>n;
    for(i=1; i<=n; i++) {
        if (i%3==0) {
            cout<<i<<"\t";
        }
    }
}
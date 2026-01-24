#include<iostream>
using namespace std;
int main () {
    int n, fact, i;
    cout<<"Please enter the number : ";
    cin>>n;
    fact=1;
    if(n==0) {
        cout<<"Factorial is 1";
    }
    else {
        for (i=1; i<=n; i++) {
            fact*=i;
        } cout<<"Factorial is "<<fact;
    }
}
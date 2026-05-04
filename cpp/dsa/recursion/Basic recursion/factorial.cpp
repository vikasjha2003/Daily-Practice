#include<iostream>
using namespace std;
int factorial (int n) {
    if (n==1) return 1;   // base case
    return n*factorial(n-1);   //other cases
}
int main () {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n);
}

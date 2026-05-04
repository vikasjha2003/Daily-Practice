#include<iostream>
using namespace std;
void print(int n) {
    if (n == 0) return; // base case
    cout<<n<<"  ";     // kaam
    print(n-1);       // call
}
void printi(int n) {
    if(n==0) return; // base case
    printi(n-1);    // call
    cout<<n<<"  "; // kaam
}
int main () {
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    print(n);
    cout<<endl;
    printi(n);
}
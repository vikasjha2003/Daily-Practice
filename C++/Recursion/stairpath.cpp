#include<iostream>
using namespace std;
int stair (int n) {
    if (n==1) return 1; //base case
    if (n==2) return 2; //base case
    // for n stairs
    return (stair(n-1) + stair(n-2));  // similar to fibonacci
}
int stair3 (int n) {
    if (n==1) return 1; //base case
    if (n==2) return 2; //base case
    if (n==3) return 4; //base case
    return (stair3(n-1)+stair3(n-2)+stair3(n-3));
}
int main () {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // cout<<stair(n);
    cout<<stair3(n);
}
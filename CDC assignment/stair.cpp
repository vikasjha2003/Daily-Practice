#include<iostream>
using namespace std;
int stairs(int n) {
    if(n==1) return 1; // bases case, if number of stairs 1 then only 1 way.
    if(n==2) return 2; //  if number of stairs 2 then 2 way. (1+1), (2).
    return stairs(n-1) + stairs(n-2); // returning the sum of both the ways.
}
int main () {
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"No. of ways to climb: "<<stairs(n);
}
#include<iostream>
using namespace std;
 int main () {
    int x,n;
    cout<<"Enter the value of base: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;
    int binform = n;
    int ans = 1;
    while(binform>0) {
        if(binform%2==1) {
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    cout<<"The solution is : "<<ans;
 }
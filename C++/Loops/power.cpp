#include<iostream>
using namespace std;
int main () {
    int a, b, i, c;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    c=1;
    if(b>0) {
        for(i=1; i<=b; i++) {
        c*=a;
    } cout<<a<<" raised to the power "<<b<<" is : "<<c;  
    } else if (b==0) {
        cout<<a<<" raised to the power "<<b<<" is : "<<1;
    } else {
        for(i=1; i<=-b; i++) {
        c*=a;
    } cout<<a<<" raised to the power "<<b<<" is : "<<((float)1/c);
    }
}
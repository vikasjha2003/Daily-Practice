#include<iostream>
using namespace std;
int main () {
    int a , b , c;
    cout<<"Enter the sides of triangle : ";
    cin>>a>>b>>c;
    if ((a+b>c) && (b+c>a) && (c+a>b)) {
        cout<<a<<" "<<b<<" "<<c<<" are sides of a triangle";
    } else {
        cout<<a<<" "<<b<<" "<<c<<" are not sides of a triangle";
    }
}
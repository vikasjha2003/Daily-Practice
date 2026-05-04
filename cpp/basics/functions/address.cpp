#include<iostream>
using namespace std;
void addr (int x, int y) { // formal parameters
    cout<<"The address of function variable x is: "<<&x<<endl;
    cout<<"The address of function variable y is: "<<&y<<endl;
}
int main () {
    int a, b;
    a=10;
    b=10;
    cout<<"The address of main variable a is: "<<&a<<endl;
    cout<<"The address of main variable b is: "<<&b<<endl;
    addr(a,b); // actual parameters
}
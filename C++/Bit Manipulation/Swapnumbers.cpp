#include<iostream>
using namespace std;
int main () {
    int a = 5;
    int b = 6;

    // method one

    // int temp = a;
    // a = b;
    // b = temp;

    // method two

    // a = a+b;
    // b = a-b;
    // a = a-b;

    // method three 

    a = a^b;
    b = a^b; // (a^b)^b = a
    a = a^b; // (a^b)^(a) = b

    cout<<a<<" "<<b<<endl;
}
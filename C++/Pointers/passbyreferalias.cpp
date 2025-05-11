#include<iostream>
using namespace std;
void swapi (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main () {
    int a, b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    swapi(a,b);
    cout<<a<<b;
}

// To be used in vectors.
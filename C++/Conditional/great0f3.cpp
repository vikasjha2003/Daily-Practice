#include<iostream>
using namespace std;
int main () {
    int a, b, c;
    cout<<"Enter value of a , b and c : ";
    cin>>a>>b>>c;
    if(a>b && a>c) {
        cout<<a<<" is largest.";
    }
    else if (a<b && c<b) {
        cout<<b<<" is largest.";
    }
    else {
        cout<<c<<" is largest.";
    }
    return 0;
}
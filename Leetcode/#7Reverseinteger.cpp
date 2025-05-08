#include<iostream>
#include<cmath>
using namespace std;
int reverse (int x) {
    int x1 = abs(x);
    long rev = 0;
    while (x1>0) {
        rev = rev*10 + x1%10;
        x1/=10; 
    }
    if (rev>(pow(2,31)-1)) return 0;
    if (x<0) x = (-1*rev);
    else x = rev;
    return x;
}
int main () {
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<reverse(x);
}
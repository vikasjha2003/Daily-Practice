#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Please enter the number : ";
    cin>>n;
    if(n>99 && n<1000) {
        cout<<"The number is a 3 digit number.";
    }
    else {
        cout<<"The number is not a 3 digit number.";
    }
    return 0;
}
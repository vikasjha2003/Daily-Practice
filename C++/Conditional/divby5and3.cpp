#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // if (n%5==0 && n%3==0) {
    //     cout<<"The number is divisible by 5 and 3.";
    // }
    // else {
    //     cout<<"The number is not divisible by 5 and 3.";
    // }
    // return 0;
    if(n%5==0 || n%3==0) {
        cout<<"The number is divisble by 3 or 5.";
    }
    else {
        cout<<"The number is not divisble by 3 or 5.";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // if (n>=0) {
    //     cout<<"Absolute value of the number is "<<n;
    // }
    // else {
    //     cout<<"Absolute value of the number is "<<-n;
    // }
    if (n<0) {
        n = -n;
    } 
    cout<<"Absolute value of the number is "<<n;
    return 0;
}
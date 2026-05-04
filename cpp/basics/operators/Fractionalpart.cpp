#include<iostream>
using namespace std;
int main () {
    float n ;
    cout<<"Please enter the decimal number : ";
    cin>>n;
    if(n<0) {
        cout<<(((int)n-1)-n);
    } 
    else {
        cout<<(n-(int)n);
    }
    return 0;
}
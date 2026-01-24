#include<iostream>
using namespace std ;
int main () {
    // odd even using ternary
    // condition ? true : false ;
    int f;
    cout<<"Please enter the number : ";
    cin>>f;
    (f%2==0) ? cout<<"even" : cout<<"odd" ;
    cout<<endl;
    (f>33) ? cout<<"pass" : cout<<"fail" ;
}
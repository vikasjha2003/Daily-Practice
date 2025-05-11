#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"Enter the first term : ";
    cin>>a;
    for (; a>0 ;) {
        cout<<a<<"\t";
        a-=3;
    }
}
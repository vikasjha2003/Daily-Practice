#include<iostream>
using namespace std;
int main () {
    int a = 5;
    int *p = &a;
    cout<<p<<endl; //0x11fabffbb4
    cout<<*p<<endl; // 5
    *p = *p + 1;
    cout<<*p<<endl;
    p = p+1;
    cout<<p<<endl; //0x11fabffbb8
    cout<<*p<<endl; // Any random no. cuz the space is unocupied
}
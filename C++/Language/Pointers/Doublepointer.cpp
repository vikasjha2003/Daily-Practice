#include<iostream>
using namespace std;
int main () {
    //Used to store address of a pointer
    int x = 60;
    int* p = &x;
    int** p1 = &p;
    cout<<x<<" "<<p<<" "<<*p<<" "<<p1<<" "<<**p1<<" "<<*p1;
}
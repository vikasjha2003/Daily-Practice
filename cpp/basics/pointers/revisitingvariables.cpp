#include<iostream>
using namespace std;
int main () {
    cout<<sizeof(double);
    int x = 6;
    cout<<"\n"<<&x;
    // Pointer intro, int* is a pointer similarly there are pointers like char*, float* etc.
    int* p = &x;
    cout<<"\n"<<p;
    // dereference operator (*), can be used to acces value at the pointer and to update the value
    cout<<"\n"<<*p;
    *p = 50;
    cout<<"\n"<<x;
}
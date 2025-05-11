#include<iostream>
using namespace std;
int main () {
    int a[] = {3,5,4,6,3,6,2,1,7,5};
    int *p = a;
    int *p1 = &a[0];
    int size = sizeof(a)/sizeof(*p);
    for(int i = 0; i<size; i++) {
        cout<<*p<<" ";
        p++;
    }
}
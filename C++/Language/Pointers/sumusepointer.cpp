#include<iostream>
using namespace std;
int main () {
    int a = 7;
    int b = 9;
    int* n = &a;
    int *m = &b;
    cout<<(*n + *m);
}
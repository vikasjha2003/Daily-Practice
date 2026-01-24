#include<iostream>
using namespace std;
int main () {
    int x=4, y=6;
    int *p1 = &x, p2 = &y;
    int *p3 = &x, p4 = y;
    int *p5 = x, p6 = &y;
}
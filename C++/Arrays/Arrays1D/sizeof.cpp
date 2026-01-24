#include<iostream>
using namespace std;
int main () {
    int a [] = {1,4,3,5,3,2,5,5,354,32,5,6,5,3,53,32,4,32,5,5,2,5,2,555,235,35 };
    int size = sizeof(a)/sizeof(a[0]);
    // cout<<size;

    // Memory allocation
    int b[] = {5,2,7,32,4};
    cout<<&b[0]<<endl;  
    cout<<&b[1]<<endl;
    cout<<&b[2]<<endl;
    cout<<&b[3]<<endl;
    cout<<&b[4]<<endl;
    // 0xe87c1ff900       Consecutive memory location is assigned.
    // 0xe87c1ff904       cout<<arr; = cout<<&arr; = cout<<&arr[0] i.e.      Address  of first element
    // 0xe87c1ff908
    // 0xe87c1ff90c
    // 0xe87c1ff910
}
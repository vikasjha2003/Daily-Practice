#include<iostream>
using namespace std;
void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main () {
    int x, y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    swap(&x,&y);
    cout<<"The new values of x and y are : "<<x<<"\t"<<y;
}
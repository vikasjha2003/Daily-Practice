#include<iostream>
using namespace std;
void display (int a[], int size) {
    for (int i = 0; i<size; i++) {
        cout<<a[i]<<" ";
    }
}
void change (int b[], int size) {
    b[4]=8; 
}
// Array always passed by reference.
int main () {
    int arr[] = {4,5,4,5,73,4,6,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    cout<<endl;
    display(arr,size);
}
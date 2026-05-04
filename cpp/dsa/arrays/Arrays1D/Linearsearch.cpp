#include<iostream>
using namespace std;
int main () {
    int n, x;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the element to look for: ";
    cin>>x;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Element present at index: ";
    for(int i = 0; i < n; i++) {
        if(arr[i]==x) {
            cout<<i<<"\t";
        }
    }
}
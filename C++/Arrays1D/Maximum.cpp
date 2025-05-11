#include<iostream>
using namespace std;
int main () {
    int n, max, max2;
    cout<<"Enter the length of array: ";
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    max = a[0];  // INT_MIN
    for(int i = 0; i < n; i++) {
        if(max<=a[i]) {
            max = a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(max2<=a[i] && a[i]!=max) {
            max2 = a[i];
        }
    }
    cout<<"The maximum value is: "<<max;
    cout<<"\nThe second largest number is: "<<max2;
}
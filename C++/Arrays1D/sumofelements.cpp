#include<iostream>
using namespace std;
int main () {
    int n, sum;
    cout<<"Please enter the value of n: ";
    cin>>n;
    sum = 0;
    int arr[n] ;
    for(int i = 0; i < n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of elements of array are: "<<sum;
}
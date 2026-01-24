#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array : ";
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }

    int max = INT_MIN;
    int smax = INT_MAX;
    for(int i = 1; i<n; i++) {
        if (max<a[i]) {
            smax = max;
            max = a[i];
        } else if (smax<a[i] && a[i]!=max) {
            smax = a[i];
        }  
    }
    if (n<=1) {
        cout<<"No second maximum element exists";
    } else {
    cout<<"The maximum element is : "<<max<<endl;
    cout<<"The second maximum element is : "<<smax<<endl;
    }

    // int product = 1;
    // for(int i = 0; i < n; i++) {
    //     product*=a[i];
    // }
    // cout<<"The product of all the elements : "<<product<<endl;

    // int min = a[0];
    // for(int i = 0; i<n; i++) {
    //     if (min>a[i]) {
    //         min = a[i];
    //     }
    // }
    // cout<<"The minimum value in array is : "<<min<<endl;

    // bool flag = false;
    // for(int i = 0; i<n; i++) {
    //     for(int j = i+1; j<n; j++) {
    //         if (a[i]==a[j]) {
    //             flag = true;
    //             cout<<"Array has duplicate element :"<<a[i]<<endl;
    //             break;
    //         }
    //     }
    // }
    // if (flag==0) {
    //     cout<<"No duplicates"<<endl;
    // }

    // int x = 1;
    // bool check = false;
    // for(int i = 0; i<n; i++) {
    //     if (x!=a[i]) {
    //         cout<<x<<" is the smallest missing positive element from the array."<<endl;
    //         check = true;
    //         break;
    //     } else {
    //         x++;
    //     }
    // }
    // if (check==false) {
    //    cout<<x<<" is the smallest missing positive element from the array.\n";
    // }
}
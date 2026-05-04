#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> v (n);
    cout<<"Enter the elements of array :";
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }

    // subarray sum
    int maxi = v[0];

// BRUTE

    // for(int st = 0; st<n; st++) {
    //     for(int en = st; en<n; en++) {
    //         int sum = 0;
    //         for(int i = st; i<=en; i++) {
    //             sum+=v[i];
    //         }
    //         if(sum>max) {
    //             max = sum;
    //         }
    //     }
    // }

// BETTER

    // for(int st = 0; st<n; st++) {
    //     int sum = 0;
    //     for(int en = st; en<n; en++) {
    //         sum += v[en]; 
    //     }
    //     if(sum>max) {
    //         max = sum;
    //     }
    // }

// BEST (KADANE'S ALGORITHM)
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += v[i];
        maxi = max(sum,maxi);
        if(sum<0) {
            sum = 0;
        }
    }
    cout<<"Maximum subarray sum is : "<<maxi;
}
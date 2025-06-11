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
    int maxi = v[0]; // to store the maximum sum
    int sum = 0; // to store the current sum of the subarray
    for(int i = 0; i<n; i++) {
        sum += v[i]; // add current element to the current sum 
        maxi = max(sum,maxi); // updating maximum if current sum greater than maximum
        if(sum<0) { 
            sum = 0; // if negative then reset the current sum
        }
    }
    cout<<"Maximum subarray sum is : "<<maxi; // printing the maximum sum
}
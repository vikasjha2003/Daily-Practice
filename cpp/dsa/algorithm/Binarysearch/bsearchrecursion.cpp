#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int binary_search (vector<int> v, int t, int lo, int hi) {
    if (lo > hi) return -1;
    int mid = lo + (hi-lo)/2;
    if (v[mid]==t) return mid;
    else if (v[mid]<t) return binary_search(v,t,mid+1,v.size()-1);
    else return binary_search(v,t,0,mid-1);
}
int main () {
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    vector<int> nums (n);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<n; i++) {
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    int target;
    cout<<"Enter the value to search for: ";
    cin>>target;
    if (binary_search(nums,target,0,n-1)==-1) {
        cout<<"Element not found in array.";
    } else {
        cout<<"The value is present at index: "<<binary_search(nums,target,0,n-1);
    }
}
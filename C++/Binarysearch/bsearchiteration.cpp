#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int binary_search (vector<int> v, int t) {
    int lo = 0;
    int hi = v.size() - 1;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid]==t) return mid;
        else if (v[mid]<t) lo = mid+1;
        else hi = mid-1;
    }
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
    cout<<"The value is present at index: "<<binary_search(nums,target);
}
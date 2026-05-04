#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE

// int maxwater(vector<int> nums) {
//     int n = nums.size();
//     int maxwater = 0;
//     for(int i = 0; i<n-1; i++) {
//         int curmax = 0;
//         for(int j = i+1; j<n; j++) {
//             curmax = min(nums[i],nums[j])*(j-i);
//             maxwater = max(curmax,maxwater);
//         }
//     }
//     return maxwater;
// }

// OPTIMAL (TWO POINTER)

int maxwater (vector<int> height) {
    int maxwater = 0;
    int left = 0;
    int right = height.size()-1;
    while(left<right) {
        int cursum = min(height[left],height[right])*(right-left);
        maxwater = max(cursum,maxwater);
        if(height[left]<height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxwater;
}

int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int> v(n);
    for(int i = 0; i<v.size(); i++) {
        cin>>v[i];
    }
    cout<<"The maximum stored water is : "<<maxwater(v);
}
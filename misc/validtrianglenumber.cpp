#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// leetcode solution, the binary search one

// class Solution {
// public:
//     int triangleNumber(vector<int>& nums) { // Binary search option, looking for the last element
//         if(nums.size()<3) return 0;
//         sort(nums.begin(),nums.end());
//         int count = 0;
//         for(int i = 0; i<nums.size()-2; i++) {
//             for(int j = i+1; j<nums.size()-1; j++) {
//                 int lo = j+1;
//                 int hi = nums.size()-1;
//                 while(lo<=hi) {
//                     int mid = lo + (hi-lo)/2;
//                     if(nums[i]+nums[j]>nums[mid]) lo = mid+1; // looking for minimum mid to fail this condition.
//                     else hi = mid-1;
//                 }
//                 count += hi -j;
//             }
//         }
//         return count;
//     }
// };

// the other solution, use of two pointer.

int main () { // two pointer approach.
    vector<int> nums = {2,2,3,4};
    if(nums.size()<3) {
        cout<<0;
        return 0;
    }
    sort(nums.begin(), nums.end());
    int count = 0;
    for(int k = 2; k<nums.size(); k++) {
        int i = 0;
        int j = k-1;
        while(i<j) {
            if(nums[i] + nums[j] > nums[k]) {
                count += j-i;
                j--;
            } else i++;
        }
    }
    cout<<count;
}
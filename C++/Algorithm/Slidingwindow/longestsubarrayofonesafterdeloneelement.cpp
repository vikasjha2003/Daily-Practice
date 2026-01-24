#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE

// int longestSubarray(vector<int>& nums) {
//     int maxlen = 0;
//     for(int i = 0; i<nums.size(); i++) {
//         int del = 0;
//         for(int j = i; j<nums.size(); j++) {
//             if(nums[j] == 0) del++;
//             if(del == 2) break;
//             maxlen = max(maxlen,j-i);
//         }
//     }
//     return maxlen;
// }

// SLIDING WINDOW

int longestSubarray(vector<int>& nums) {
    int l = 0;
    int r = 0;
    int maxlen = 0;
    int del = 0;
    while(r<nums.size()) {
        if(nums[r] == 0) del++;
        while(del>1) {
            if(nums[l] == 0) del--;
            l++;
        }
        maxlen = max(maxlen , r - l); // not adding one since we have to kind of return maxlen - 1
        r++;
    }
    return maxlen;
}

int main () {
    vector<int> nums = {1,1,1};  // ans = 2;
    cout<<longestSubarray(nums);
}
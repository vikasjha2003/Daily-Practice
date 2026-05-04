#include<bits/stdc++.h>
using namespace std;

// void helper(vector<int>& nums, int& n, int& mini, int count , int idx, int curs, int & sum) {
//     if(count == n) {
//         mini = min (mini, abs(2*curs - sum)); // curs - (sum - curs)
//         return;
//     }
//     if(idx >= n*2 || n - count > n*2 - idx) return;
//     helper(nums,n,mini,count + 1, idx + 1, curs + nums[idx], sum); // pick
//     helper(nums,n,mini,count, idx + 1, curs, sum); // no pick
// }
// int minimumDifference(vector<int>& nums) {
//     int sum = accumulate(nums.begin(),nums.end(),0);
//     int mini = INT_MAX;
//     int n = nums.size()/2;
//     helper(nums,n,mini,0,0,0,sum);
//     return mini;
// }


int main () {
    vector<int> arr = {3,9,7,3};
    cout<<minimumDifference(arr);
}
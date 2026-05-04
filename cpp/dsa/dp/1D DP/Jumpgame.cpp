#include<iostream>
#include<vector>
using namespace std;
bool helper (vector<int> &nums, int i, vector<int> &dp) { // recursion with memoization
    if(i>=nums.size() -1) return true;
    if(dp[i] != -1) return dp[i];
    for(int j = 1; j<=nums[i]; j++) {
        if(helper(nums,i+j,dp)) return dp[i] = true;
    }
    return dp[i] = false;
}
bool helper1(vector<int> &nums,int idx) { // recursion
    if(idx >= nums.size()-1) return true;
    for(int i = 1; i<=nums[idx]; i++) {
        if(helper1(nums,idx+i)) return true;
    }
    return false;
}
int main () {
    vector<int> nums = {2,0,1,1,4};
    vector<int> dp(nums.size(),-1);
    cout<<helper(nums,0,dp);
}
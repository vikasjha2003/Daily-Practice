#include<iostream>
#include<vector>
using namespace std;
int rob(vector<int> & nums, int i) {
    if(i >= nums.size()) return 0;
    int steal = nums[i] + rob(nums,i+2); // if steal then just skip next one
    int leave = rob(nums,i+1); // if not steal then check next one
    return max(steal,leave);
}
int rob(vector<int> & nums, int i, vector<int> &dp) { 
    if(i >= nums.size()) return 0; // base case
    if(dp[i] != -1) return dp[i]; // dp check
    int steal = nums[i] + rob(nums,i+2,dp); // if steal then skip next
    int leave = rob(nums,i+1,dp); // if not steal then next
    return  dp[i] = max(steal,leave);
}
int main () {
    vector<int> nums = {1,2,3,1};
    vector<int> dp(nums.size(),-1);
    cout<<rob(nums,0,dp);
}
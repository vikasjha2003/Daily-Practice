#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int> &nums, int count, int i) { // jump game 2 recursive
    if(i>=nums.size()-1) return count;
    int mini = INT_MAX;
    for(int j = 1; j<= nums[i]; j++) {
        int a = helper(nums,count+1,i+j);
        mini = min(a,mini);
    }
    return mini;
}
int helper(vector<int> &nums, int count, int i, vector<int> &dp) {
    if(i>=nums.size()-1) return count;
    if(dp[i] != -1) return count + dp[i];
    int mini = INT_MAX;
    for(int j = 1; j<= nums[i]; j++) {
        int a = helper(nums,count+1,i+j,dp);
        mini = min(a,mini);
    }
    dp[i] = mini - count;
    return mini;
}
int main () {
    vector<int> v = {2,3,1,1,4};
    vector<int> dp(v.size(),-1);
    cout<<helper(v,0,0,dp);
}
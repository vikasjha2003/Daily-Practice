#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int>& height, int i , vector<int>& dp) {
    if(i >= height.size() -1) return 0;
    if(dp[i] != -1) return dp[i];
    int one = abs(height[i] - height[i+1]) + helper(height,i+1,dp);;
    int two = INT_MAX;
    if(i+2 < height.size()) {
        two = abs(height[i] - height[i+2]) + helper(height,i+2,dp);
    }
    return dp[i] = min(one,two);
}
int minCost(vector<int>& height) {
    vector<int> dp (height.size(),-1);
    return helper(height,0,dp);
}
int main () {
    vector<int> v = {30, 20, 50, 10, 40};
    cout<<minCost(v);
}
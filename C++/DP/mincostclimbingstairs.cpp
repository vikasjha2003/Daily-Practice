#include<iostream>
#include<vector>
using namespace std;
// int helper(vector<int>& cost, int idx, vector<int> &dp) { 
//     if(idx >= cost.size()) return 0;
//     if(dp[idx] != -1) return dp[idx];
//     int ostep = cost[idx] + helper(cost,idx+1,dp);
//     int tstep = cost[idx] + helper(cost,idx+2,dp);
//     return dp[idx] = min(ostep,tstep);
// }
// int minCostClimbingStairs(vector<int>& cost) { // memoization
//     vector<int> dp(cost.size(),-1);
//     int zero = helper(cost,0,dp);
//     int one = helper(cost,1,dp);
//     return min(zero,one);
// }
int minCostClimbingStairs(vector<int>& cost) { // tabulation
    int prev1 = 0;
    int prev2 = 0;
    for(int i = 2; i<=cost.size(); i++) {
        int temp = min(prev1 + cost[i-1],prev2 + cost[i-2]);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
int main () {
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    cout<<minCostClimbingStairs(cost);
}
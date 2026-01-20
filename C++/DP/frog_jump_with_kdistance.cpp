#include<iostream>
#include<vector>
using namespace std;

// A frog wants to climb a staircase with n steps. Given an integer array heights, where heights[i] contains the height of the ith step, and an integer k.

// To jump from the ith step to the jth step, the frog requires abs(heights[i] - heights[j]) energy, where abs() denotes the absolute difference. The frog can jump from the ith step to any step in the range [i + 1, i + k], provided it exists.

// Return the minimum amount of energy required by the frog to go from the 0th step to the (n-1)th step.

int solve(vector<int> & heights, int k, int idx, vector<int> & dp) {
    if(idx >= heights.size() - 1) return 0;
    if(dp[idx] != -1) return dp[idx];
    int min_energy = INT_MAX;
    for(int i = 1; i<= k && (idx + i < heights.size()); i++) {
        int ret = abs(heights[idx] - heights[idx+i]) + solve(heights,k,idx+i,dp);
        min_energy = min(min_energy,ret);
    }
    return dp[idx] = min_energy;
}

int frogJump(vector<int>& heights, int k) {
    vector<int> dp(heights.size(),-1);
    return solve(heights,k,0,dp);
}

int main () {
    vector<int> heights = {10, 100, 10, 100};
    int k = 2;
    cout<<frogJump(heights,k);
}
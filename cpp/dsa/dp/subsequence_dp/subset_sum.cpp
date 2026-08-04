#include<iostream>
#include<vector>

using namespace std;

// int n;   

// bool solve(vector<int>& arr, int sum, int idx, vector<vector<int>> &dp) {  Memoization
//     if(sum == 0) return true;
//     if(idx == n) return false;
//     if(dp[idx][sum] != -1) return dp[idx][sum];
    
//     bool skip = solve(arr,sum,idx+1,dp);
    
//     bool pick = false;
    
//     if(arr[idx] <= sum) {
//         pick = solve(arr,sum-arr[idx],idx+1,dp);
//     }
    
//     return dp[idx][sum] = skip || pick;
// }

// bool isSubsetSum(vector<int>& arr, int sum) {
//     n = arr.size();
//     vector<vector<int>> dp (n, vector<int> (sum + 1, -1));
    
//     return solve(arr,sum,0,dp);
// }

bool isSubsetSum(vector<int>& arr, int sum) {
    int n = arr.size();
    
    vector<vector<int>> dp (n+1, vector<int> (sum + 1, false));
    
    for(int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }
    
    for(int i = n-1; i >= 0; i--) {
        for(int j = sum; j > 0; j--) {
            bool skip = dp[i+1][j];
            bool take = false;
            if(arr[i] <= j) take = dp[i+1][j - arr[i]];
            dp[i][j] = skip || take;
        }
    }
    
    return dp[0][sum];
}



int main () {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    cout<<isSubsetSum(nums,sum);
}
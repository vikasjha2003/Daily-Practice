#include<iostream>
#include<vector>
using namespace std;

// void helper(vector<vector<int>>& arr, int skip, int ans, int idx, int & maxi) {
//     if(idx >= arr.size()) {
//         maxi = max(ans,maxi);
//         return;
//     } 
//     for(int i = 0; i < 3; i++) {
//         if(i == skip) continue;
//         helper(arr,i,ans + arr[idx][i], idx+1, maxi);
//     }  
// }
// int maximumPoints(vector<vector<int>>& arr) {
//     int maxi = 0;
//     helper(arr,-1,0,0,maxi); // -1 since no element has to be skipped
//     return maxi;
// }

int helper(vector<vector<int>>& arr, int skip,int idx) { // recursive with recurence relation, non void
    if(idx == arr.size()) return 0;
    int maxi = 0;
    for(int i = 0; i < 3; i++) {
        if(i == skip) continue;
        int a = arr[idx][i] + helper(arr,i, idx+1);
        maxi = max(maxi,a);
    }
    return maxi;
}

int helper(vector<vector<int>>& arr, int skip, int idx, vector<vector<int>> &dp) {
    if(idx == arr.size()) return 0;
    if(dp[idx][skip+1] != -1) return dp[idx][skip+1];
    int maxi = 0;
    for(int i = 0; i < 3; i++) {
        if(i == skip) continue;
        int a = arr[idx][i] + helper(arr,i,idx+1,dp);
        maxi = max(maxi,a);
    }
    return dp[idx][skip+1] = maxi;
}
int maximumPoints(vector<vector<int>>& arr) {
    vector<vector<int>> dp (arr.size() , vector<int> (4,-1));
    return helper(arr,-1,0,dp);
}
int main () {
    vector<vector<int>> arr = {{1, 1, 1}, {2,2,2}, {3, 3, 3},{4,4,4}};
    cout<<"The max achievable score is : "<< maximumPoints(arr);
}
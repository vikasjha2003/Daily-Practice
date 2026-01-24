#include<bits/stdc++.h>
using namespace std;
// 2nd edition of this problem is similar to ninja training from striver sheet so not including that in VS code.
int helper(vector<vector<int>>& matrix , int row , int last, vector<vector<int>>& dp) {
    if(row == matrix.size()) return 0;
    if(dp[row][last] != -101) return dp[row][last];
    int mini = INT_MAX;
    for(int i = last - 1; i <= last + 1; i++) {
        if(i>=0 && i < matrix.size()) {
            int a = matrix[row][i] + helper(matrix,row+1,i,dp); 
            mini = min(mini,a); 
        }
    }
    return dp[row][last] = mini;
}
int minFallingPathSum(vector<vector<int>>& matrix) {
    vector<vector<int>> dp (matrix.size() , vector<int> (matrix.size(),-101));
    int mini = INT_MAX;
    for(int i = 0; i<matrix.size(); i++) {
        int a = matrix[0][i] + helper(matrix,1,i,dp);
        mini = min(mini,a);
    }
    return mini;
}
int main () {
    vector<vector<int>> matrix = {{2,1,3},{6,5,4},{7,8,9}};
    cout<<minFallingPathSum(matrix);
}
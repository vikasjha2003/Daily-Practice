#include<iostream>
#include<vector>
using namespace std;
int check (vector<vector<int>> &v,int prev1, int prev2, vector<vector<int>> & dp) { // brute force dp
    if(prev1 == v.size()) return 0;
    if(dp[prev1][prev2] != -1) return dp[prev1][prev2];
    int a = v[prev1][prev2] + check(v,prev1+1,prev2,dp);
    int b = v[prev1][prev2] + check(v,prev1+1,prev2+1,dp);
    dp[prev1][prev2] = min(a,b);
    return dp[prev1][prev2];
}
int main () {
    vector<vector<int>> v = {{2},{1,2},{100,101,2},{100,2,100,2}};
    vector<vector<int>> dp(v.size());
    for(int i = 0; i < v.size(); i++) dp[i] = vector<int>(v[i].size(), -1);
    cout<<"The minimum path sum is: "<<check(v,0,0,dp);
}
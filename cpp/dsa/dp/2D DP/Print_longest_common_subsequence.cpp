#include<bits/stdc++.h>
using namespace std;

int main () {
    string text1 = "baddie";
    string text2 = "daddy"; 
    
    int m = text1.length();
    int n = text2.length();

    vector<vector<int>> dp (m+1, vector<int> (n+1,0));
    
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(text1[i-1] == text2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    string res = "";
    int i = m, j = n; 
    
    while(i>0 && j>0) {
        if(text1[i-1] == text2[j-1]) {
            res.push_back(text1[i-1]);
            i--;
            j--;
        } else {
            if(dp[i-1][j] > dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
    }
    
    reverse(res.begin(),res.end());

    cout<<res<<endl;
    cout<<dp[m][n]<<endl;
}
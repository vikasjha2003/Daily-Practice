#include <bits/stdc++.h>
using namespace std;

double probability(int n) {
    if(n < 0) return 0;
    
    vector<double> dp(n+1, 0.0);
    
    dp[0] = 1.0;
    
    for(int i = 1; i <= n; i++) {
        if(i - 2 >= 0)
            dp[i] += dp[i-2] * 0.8;
        if(i - 3 >= 0)
            dp[i] += dp[i-3] * 0.2;
    }
    
    return dp[n];
}

int main() {
    int n = 8;
    cout << fixed << setprecision(2) << probability(n);
}

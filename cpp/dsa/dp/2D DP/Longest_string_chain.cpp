#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool is_predecessor (string &s1, string &s2) {
    if(s2.length() - s1.length() != 1) return false;
    int i = 0, j = 0;
    bool flag = false;
    while(i < s1.size()) {
        if(s1[i] == s2[j]) {
            i++;
            j++;
        } else {
            if(flag) return false;
            flag = true;
            j++;
        }
    }
    return true;
}

int main () {
    vector<string> words = {"a","bca","bda","b","ba","bdca"};
    int n = words.size();
    
    vector<int> dp (n,1);

    sort(words.begin(), words.end(), [](string &s1, string &s2) {
        return s1.length() < s2.length();
    });

    int res = 1;

    for(int i = 1; i<n; i++) {
        for(int j = i-1; j >= 0; j--) {
            if(is_predecessor(words[j],words[i])) dp[i] = max(dp[i],dp[j] + 1);
        }
        res = max(res,dp[i]);
    }

    cout<< res;
}
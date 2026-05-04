#include<bits/stdc++.h>
using namespace std;
int longestKSubstr(string &s, int k) {
    unordered_map<char,int> freq;
    int l = 0;
    int r = 0;
    int maxlen = -1;
    while(r<s.length()) {
        freq[s[r]]++;
        while(freq.size()>k) {
            freq[s[l]]--;
            if(freq[s[l]] == 0) freq.erase(s[l]); 
            l++;
        }
        if(freq.size() == k) maxlen = max(maxlen,r-l+1);
        r++;
    }
    return maxlen;
}
int main () {
    string s = "Vikasss";
    int k = 4;
    cout<< longestKSubstr(s,k);
}
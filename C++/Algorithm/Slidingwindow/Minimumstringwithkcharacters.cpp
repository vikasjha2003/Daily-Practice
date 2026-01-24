// Find minimum length substring that contains k distinct characters
#include<bits/stdc++.h>
using namespace std;
int minimumstr (string str, int k) {
    unordered_map<char,int> mpp;
    int l = 0;
    int r = 0;
    int minlen = str.size();
    while(r<str.size()) {
        mpp[str[r]]++;
        while(mpp.size() == k) {
            minlen = min(minlen,r-l+1);
            mpp[str[l]]--;
            if(mpp[str[l]] == 0) mpp.erase(str[l]);
            l++;
        }
        r++;
    }
    return minlen == str.size() ? -1 : minlen;
}
int main () {
    string s = "aaaaabbbbbcccc";
    int k = 3;
    cout<<minimumstr(s,k)<<endl;
}
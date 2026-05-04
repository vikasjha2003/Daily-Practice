#include<iostream>
#include<string>
#include<unordered_set>
using namespace std; 

// int max (int a, int b) {
//     if(a>b) {
//         return a;
//     } else return b;
// }
// int lengthOfLongestSubstring(string s) {
//     int maxl = 0;
//     for(int i = 0; i<s.length() - maxl; i++) {
//         unordered_set<char> st;
//         for(int j = i; j<s.length(); j++) {
//             if(st.find(s[j]) == st.end()) {
//                 st.insert(s[j]);
//             } else break;
//         }
//         maxl = max(maxl,st.size());
//     }
//     return maxl;
// }

int lengthOfLongestSubstring(string s) {
    int maxlen = 0;
    unordered_set<int> st;
    int l = 0;
    int r = 0;
    while(r<s.length()) {
        if(st.find(s[r]) == st.end()) st.insert(s[r]);
        else {
            while(st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
        }
        maxlen = max(maxlen,r-l+1);
        r++;
    }
    return maxlen;
}

int main () {
    string s = "apple";
    cout<<lengthOfLongestSubstring(s);
}
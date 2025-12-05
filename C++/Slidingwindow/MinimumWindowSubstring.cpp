#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

// BRUTE FORCE

// string minWindow(string s, string t) {
//     if(s.length() < t.length()) return "";
//     unordered_map<char,int> freq;
//     for(int i = 0; i<t.length(); i++) {
//         freq[t[i]]++;
//     }
//     int n = s.length();
//     string str (n + 1, '#');
//     for(int i = 0; i<n; i++) {
//         unordered_map<char,int> mp = freq;
//         string st = "";
//         for(int j = i; j<n; j++) {
//             st.push_back(s[j]);
//             if(mp.find(s[j]) != mp.end()) {
//                 mp[s[j]]--;
//                 if(!mp[s[j]]) mp.erase(s[j]);
//             }
//             if(mp.empty()) {
//                 if(st.length() < str.length()) str = st;
//                 break;
//             }
//         }
//     }
//     return (str.length() == n+1) ? "" : str ;
// }

// SLIDING WINDOW

// slightly difficult to think but doable, just make sure to consider when shrink, when expand and when to update idx and minlen.

string minWindow(string s, string t) {
    if(s.length() < t.length()) return "";
    unordered_map<char,int> freq;
    for(int i = 0; i<t.length(); i++) {
        freq[t[i]]++;
    }
    int l = 0, r = 0, idx = -1, count = 0, minlen = s.length() + 1;
    while(r < s.length()) {
        if(freq.find(s[r]) != freq.end()) {
            freq[s[r]]--;
            if(freq[s[r]] >= 0) count++;
        }
        while (count == t.length()) {
            if(r - l + 1 < minlen) {
                idx = l;
                minlen = r - l + 1;
            }
            if(freq.find(s[l]) != freq.end()) {
                freq[s[l]]++;
                if(freq[s[l]] == 1) count--;
            }
            l++;
        }
        r++;
    }
    if(idx == -1) return "";
    return s.substr(idx,minlen);
}

int main () {
    string str = "ADOBECODEBANC";
    string st = "ABC";
    cout<< minWindow(str,st);
}
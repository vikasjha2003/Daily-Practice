#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// int numberOfSubstrings(string s) { // brute force
//     int number = 0;
//     int n = s.length();
//     for(int i = 0; i<n-2; i++) {
//         unordered_set<char> st;
//         for(int j = i; j<n; j++) {
//             st.insert(s[j]);
//             if(st.size() == 3) {
//                 number += n - j;
//                 break;
//             }
//         }
//     }
//     return number;
// }

int numberOfSubstrings(string s) {
    int n = s.length();
    int number = 0;
    int l = 0;
    int r = 0;
    unordered_map<char,int> mp;
    while(r<s.size()) {
        mp[s[r]]++;
        while(mp.size() == 3) {
            number += n - r;
            mp[s[l]]--;
            if(mp[s[l]] == 0) mp.erase(s[l]);
            l++;
        }
        r++;
    }
    return number;
}

int main () {
    string str = "aaabc";
    cout<<numberOfSubstrings(str);
}
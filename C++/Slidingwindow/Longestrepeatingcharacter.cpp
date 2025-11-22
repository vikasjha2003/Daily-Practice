#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Brute Force

// int characterReplacement(string s, int k) { 
//     int maxlen = 0;
//     for(int i = 0; i<s.length(); i++) {
//         vector<int> freq(26,0);
//         int maxfreq = 0;
//         for(int j = i; j<s.length(); j++) {
//             int c = s[j] - 'A';
//             freq[c]++;
//             maxfreq = max(maxfreq,freq[c]);
//             if(j-i-maxfreq + 1 > k) break;
//             maxlen = max (maxlen, j-i+1);
//         }
//     }
//     return maxlen;
// }

int characterReplacement(string s, int k) {
    int n = s.length();
    int maxlen = 0;
    int l = 0, r = 0, maxfreq = 0;
    vector<int> freq(26,0);
    while(r<n) {
        freq[s[r] - 'A']++;
        maxfreq = max(maxfreq,freq[s[r] - 'A']);
        while((r-l+1) - maxfreq > k) {
            freq[s[l] - 'A']--;
            l++;
        }
        maxlen = max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}

int main () {
    string s = "ABAB";
    int k = 2;
    cout<< characterReplacement(s,k);
}
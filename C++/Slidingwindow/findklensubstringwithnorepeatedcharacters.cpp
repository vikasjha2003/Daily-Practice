// we have to count total no. of substrings of length k that have no repeated characters.
#include<bits/stdc++.h>
using namespace std;
int countsubstrings(string str, int k) {
    int l = 0, r = 0;
    int count = 0;
    unordered_map<char,int> freq;
    while(r<str.size()) {
        if(r<k) {
            freq[str[r]]++;
            r++;
        } else {
            freq[str[r]]++;
            freq[str[l]]--;
            if(freq[str[l]]  == 0) freq.erase(str[l]);
            l++;
            r++;
        }
        if(freq.size() == k) count++;
    } 
    return count;
}
int main () {
    string str = "havefunonleetcode";
    int k = 5;
    cout<<countsubstrings(str,k);
}
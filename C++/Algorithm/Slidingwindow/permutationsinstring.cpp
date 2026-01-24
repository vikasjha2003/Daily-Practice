// Leetcode 567 , same solution for leetcode 438
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

// SLIDING WINDOW 

bool checkInclusion(string s1, string s2) {
    if(s1.length() > s2.length()) return false;
    unordered_map<char,int> freq;
    int count = 0;
    for(int i = 0; i<s1.length(); i++) freq[s1[i]]++;
    for(int i = 0; i<s1.length(); i++) {
        if(freq.find(s2[i]) != freq.end()) {
            freq[s2[i]]--;
            if(freq[s2[i]] >= 0) count++;
        }
    }
    if(count == s1.length()) return true;
    int l = 0;
    int r = s1.length();
    while(r<s2.length()) {
        if(freq.find(s2[r]) != freq.end()) {
            freq[s2[r]]--;
            if(freq[s2[r]] >= 0) count++;
        }
        if(freq.find(s2[l]) != freq.end()) {
            freq[s2[l]]++;
            if(freq[s2[l]] > 0) count--;
        }
        if(count == s1.length()) return true;
        l++;
        r++;
    }
    return false;
}

int main () {
    string s1 = "adc";
    string s2 = "dadc";
    checkInclusion(s1,s2);
}
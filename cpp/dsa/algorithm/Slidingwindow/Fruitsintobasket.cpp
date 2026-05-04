#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int maxlen = 0;
    int l = 0, r = 0;
    unordered_map<int,int> freq;
    while(r<fruits.size()) {
        freq[fruits[r]]++;
        while(freq.size() > 2) {
            freq[fruits[l]]--;
            if(freq[fruits[l]] == 0) freq.erase(fruits[l]);
            l++;
        }
        maxlen = max(r-l+1,maxlen);
        r++;
    }
    return maxlen;
}

int main () {
    vector<int> v = {1,2,1};
    cout<< totalFruit(v);
}
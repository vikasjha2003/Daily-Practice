#include<iostream>
#include<vector>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int maxlen = 0;
    int l = 0;
    int r = 0;
    while(r<nums.size()) {
        if(nums[r] == 0) k--;
        while(k == -1) {
            if(nums[l] == 0) k++;
            l++;
        }
        maxlen = max(maxlen,r-l+1);
        r++;
    }
    return maxlen;
}

int main () {
    vector<int> v = {1,1,1,0,0,0,1,1,1,1};
    int k = 2;
    cout<< longestOnes(v,k);
}
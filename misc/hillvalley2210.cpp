#include<iostream>
#include<vector>
using namespace std;
int countHillValley(vector<int>& nums) { // two pointer no extra space
    int left = nums[0], count = 0;
    for(int i = 1; i<nums.size()-1; i++) {
        if(nums[i]==nums[i+1]) continue;
        int right = nums[i+1];
        if((left<nums[i] && right<nums[i]) || (left>nums[i] && right>nums[i])) count++;
        left = nums[i-1];
    }
    return count;
}

int countHillValleyS(vector<int>& nums) { // extra space for ans array
    vector<int> v;
    v.push_back(nums[0]);
    for(int i = 1; i<nums.size(); i++) {
        if(nums[i]!=v[v.size()-1]) v.push_back(nums[i]);
    }
    int count = 0;
    for(int i = 1; i<v.size()-1; i++) {
        if ((v[i-1]<v[i] && v[i+1]<v[i]) || (v[i-1]>v[i] && v[i+1]>v[i])) count++;
    }
    return count;
}

int main () {
    vector<int> v = {57,57,57,57,57,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,85,85,85,86,86,86};
    cout<<countHillValley(v);
}
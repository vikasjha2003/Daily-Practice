#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    for(int i = 1; i<nums.size(); i++) {
        nums[i] += nums[i-1]; 
    }
    
}

int main () {
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};
    vector<int> v = answerQueries(nums,queries);
    for(int i : v) {
        cout<<i<<" ";
    }cout<<endl;
}
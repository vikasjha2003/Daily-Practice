#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int> nums,int idx) { // helper function for recursion
    if(idx>nums.size()-1) return 0; // base case, ending if idx exceeds arrays size
    int skip = helper(nums,idx+1); // not robbing
    int rob = nums[idx] + helper(nums,idx+2); // robbing
    return max(skip,rob); // returning the maximum from both route.
}
int rob(vector<int>& nums) {
    return helper(nums,0);
}
int main () {
    vector<int> v = {1,2,3,1};
    cout<<"The max amount we can rob is: "<<rob(v);
}
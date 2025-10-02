#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans (nums.size(),1); // vector to store both prefix sum and suffix sum
    int prefix = 1; // to store the prefix product so far
    int suffix = 1; // to store the suffix product so far
    for(int i = 0, j=nums.size()-1; i<nums.size(); i++, j--) { // both i and j used in single loop to traverse both direction at once and calculate prefix product and suffix product with single loop
        ans[i] *= prefix; // directly updating ans vector instead of storing elsewhere
        ans[j] *= suffix; // directly updating ans vector with suffix product instead of storing elsewhere
        prefix *= nums[i]; // updating prefix 
        suffix *= nums[j]; // updating suffix
    }   
    return ans; // returning the answer vector
}
int main () {
    vector<int> v = {1,2,3,4};
    vector<int> ans = productExceptSelf(v);
    for(int val : ans) {
        cout<<val<<" ";
    }
}
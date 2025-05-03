#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE

// vector<int> productExceptSelf(vector<int> &nums) {
//     vector<int> ans (nums.size(),1);
//     for(int i = 0; i<nums.size(); i++) {
//         // int product = 1;
//         for(int j = 0; j<nums.size(); j++) {
//             if(nums[i]!=nums[j]) {
//                 // product *= nums[j];
//                 ans[i] *= nums[j];
//             }
//         }
//         // ans[i] = product;
//     }
//     return ans;
// }

// DIVIDE METHOD (Will not work if array contains 0)

// vector<int> productExceptSelf(vector<int>& nums) {
//     int prod = 1;
//     for(int i = 0; i<nums.size(); i++) {
//         prod *= nums[i];
//     }
//     for(int i = 0; i<nums.size(); i++) {
//         nums[i] = prod/nums[i];
//     }
//     return nums;
// }

// PREFIX,SUFFIX

// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> prefix (nums.size());
//     int prod = 1;
//     for(int i = 0; i<prefix.size(); i++) {
//         prefix[i] = prod;
//         prod *= nums[i];
//     }
//     vector<int> suffix (nums.size());
//     int pro = 1;
//     for(int i = nums.size()-1; i>=0; i--) {
//         suffix[i] = pro;
//         pro *= nums[i];
//     }
//     for(int i = 0; i<nums.size(); i++) {
//         nums[i] = prefix[i]*suffix[i];
//     }
//     return nums;
// }

// PREFIX SUFFIX (SPACE OPTIMISED)
// instead of storing prefix and suffix, directly multiply it with ans.

// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> ans (nums.size(),1);
//     int prefix = 1;
//     for(int i = 0; i<nums.size(); i++) {
//         ans[i] *= prefix;
//         prefix *= nums[i];
//     }   
//     int suffix = 1;
//     for(int i =nums.size()-1; i>=0; i--) {
//         ans[i] *= suffix;
//         suffix *= nums[i];
//     }
//     return ans;
// }

// TRYING TO OPTIMISE EVEN MORE(SUCCESSFUL)

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans (nums.size(),1);
    int prefix = 1;
    int suffix = 1;
    for(int i = 0, j=nums.size()-1; i<nums.size(); i++, j--) {
        ans[i] *= prefix;
        ans[j] *= suffix;
        prefix *= nums[i];
        suffix *= nums[j];
    }   
    return ans;
}

int main () {
    vector<int> v = {1,2,3,4};
    vector<int> ans = productExceptSelf(v);
    for(int val : ans) {
        cout<<val<<" ";
    }
}
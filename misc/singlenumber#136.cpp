#include<iostream>
#include<vector>
using namespace std;
// BRUTE FORCE METHOD

// int Numbers(vector<int>& nums) {
//     if(nums.size()==1) return nums[0];
//     else {
//         for(int i=0; i<nums.size(); i++) {
//             int count = 0;
//             for(int j = 0; j<nums.size(); j++) {
//                 if(nums[i]==nums[j]) {
//                     count++;
//                 }
//             }
//             if (count == 1) return nums[i];
//         }
//         return 0;
//     }
// }

// OPTIMISED USING BIT MANIPULATION
// cancel out all the duplicates with each other using XOR.

int num(vector<int> nums) {
    int ans = 0;
    for(int i : nums) {
        ans ^= i;
    }
    return ans;
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of vector: ";
    vector<int> v (n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    // cout<<Numbers(v);
    cout<<num(v);
}
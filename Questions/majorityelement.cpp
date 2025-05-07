//Leetcode #169
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//most trash approach, even worse then brute force

// int majority (vector<int> nums) {
//     sort(nums.begin(), nums.end());
//         int major = nums[0];
//         if(nums.size()==1) return major;
//         int amt = 0;
//         int c = 0;
//         int j = 0;
//         for(int i = 0; i<nums.size(); i++) {
//             while(j<nums.size()) {
//                 if(j==nums.size()-1) {
//                     c++;
//                     break;
//                 }
//                 if(nums[j]==nums[j+1]) {
//                     c++;
//                     j++;
//                 } else {
//                     break;
//                 }
//             }
//             if(c>amt) {
//                 amt = c;
//                 major = nums[j];
//                 c = 0;
//                 j++;
//             } else {
//                 c = 0;
//                 j++;
//             }
//         }
//         return major;
// }

// BRUTE FORCE

// int majority (vector<int> nums) {
//     for(int val : nums) {
//         int count = 0;
//         for(int i : nums) {
//             if(i==val) count++;
//         }
//         if(count > nums.size()/2) {
//             return val;
//         }
//     }
// }

// BETTER
// int majority (vector<int> nums) {
//     sort(nums.begin(), nums.end());
//     int count = 1;
//     int ans = nums[0];
//     for(int i = 1; i < nums.size(); i++) {
//         if(nums[i]==nums[i-1]) {
//             count++;
//         } else{
//             count = 1;
//             ans = nums[i];
//         }
//         if(count > nums.size()/2) {
//             return ans;
//         }
//     }
//     return ans;
// }

// LESS LINE OF CODE

// int majority (vector<int> nums) {
//     sort(nums.begin(), nums.end());
//     return nums[nums.size()/2]; // majority element will be middle element
// }

// BEST (MOORE'S ALGO)
    int majority (vector<int> nums) {
        int count = 0;
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if (count==0) {
                ans = nums[i];
            }
            if(nums[i]==ans) {
                count++;
            } else {
                count--;
            }
        }
        return ans;
    }
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the vector: ";
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    cout<<"The majority element of the array is: "<<majority(v);    
}
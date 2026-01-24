#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE

// int subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//     for(int i = 0; i<nums.size(); i++) {
//         int sum = 0;
//         for(int j = i; j<nums.size(); j++) {
//             sum += nums[j];
//             if(sum == k) count ++;
//         }
//     }
//     return count ;
// }

int subarraySum(vector<int>& nums, int k) {
    unordered_map<long long,int> ps;
    int count = 0;
    long long sum = 0;
    for(int i = 0; i<nums.size(); i++) {
        sum += nums[i];
        if(sum == k) count++;
        if(ps.find(sum - k) != ps.end()) count += ps[sum - k];
        ps[sum]++;
    }
    return count;
}

int main () {
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<subarraySum(nums,k);
}
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE O(n*n)

// int numSubarraysWithSum(vector<int>& nums, int k) {
//     int count = 0;
//     for(int i = 0; i<nums.size(); i++) {
//         int sum = 0;
//         for(int j = i; j<nums.size(); j++) {
//             sum += nums[j];
//             if(sum == k) count++;
//             if(sum > k) break;
//         }
//     }
//     return count;
// }

// PREFIX SUM time -> O(n) space -> O(n)

// int numSubarraysWithSum(vector<int>& nums, int k) {
//     unordered_map<long long,int> ps;
//     int count = 0;
//     long long sum = 0;
//     for(int i = 0; i<nums.size(); i++) {
//         sum += nums[i];
//         if(sum == k) count++;
//         if(ps.find(sum - k) != ps.end()) count += ps[sum - k];
//         ps[sum]++;
//     }
//     return count;
// }

// SLIDING WINDOW time -> O(n) space -> O(1) 

int numSubarraysWithSum(vector<int>& nums, int k) {
    int l = 0;
    int r = 0;
    int sum = 0;
    int count = 0;
    while(r<nums.size()) {
        if(nums[r] == 1) sum++;
        while(sum>k) {
            if(nums[l] == 1) sum--;
            l++;
        }
        count += r-l+1;
        r++;
    }
    if(k == 0) return count;
    l = 0, r = 0, sum = 0;
    while(r<nums.size()) {
        if(nums[r] == 1) sum++;
        while(sum>k-1) {
            if(nums[l] == 1) sum--;
            l++;
        }
        count -= r-l+1;
        r++;
    }
    return count;
}

int main () {
    vector<int> v = {1,0,1,0,1};
    int k = 2;
    cout<< numSubarraysWithSum(v,k);
}
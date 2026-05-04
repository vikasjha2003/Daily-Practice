#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE

// int numberOfSubarrays(vector<int>& nums, int k) {
//     int count = 0;
//     for(int i = 0; i<nums.size(); i++) {
//         int odd = 0;
//         for(int j = i; j<nums.size(); j++) {
//             if(nums[j] % 2 == 1) odd++;
//             if(odd == k) count++;
//             if(odd > k) break;
//         }
//     }
//     return count;
// }

// SLIDING WINDOW time -> O(n) space -> O(n)

int numberOfSubarrays(vector<int>& nums, int k) {
    int count = 0;
    int odd = 0;
    int l = 0;
    int r = 0;
    while(r<nums.size()) {
        if(nums[r] % 2 == 1) odd++;
        while(odd>k) {
            if(nums[l] % 2 == 1) odd--;
            l++;
        }
        count += r-l+1;
        r++;
    }
    if(k<=0) return count;
    l = 0, r = 0, odd = 0;
    while(r<nums.size()) {
        if(nums[r] % 2 == 1) odd++;
        while(odd>k-1) {
            if(nums[l] % 2 == 1) odd--;
            l++;
        }
        count -= r-l+1;
        r++;
    }
    return count;
}

int main () {
    vector<int> v = {2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    cout<< numberOfSubarrays(v,k);
}
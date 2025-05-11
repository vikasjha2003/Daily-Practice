#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// BRUTE FORCE (Duplicate dealt with, Will give TLE)

// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> v;
//     sort(nums.begin(), nums.end());
//     for(int i = 0; i<nums.size()-2; i++) {
//         if (i > 0 && nums[i] == nums[i - 1]) continue;
//         for(int j = i+1; j<nums.size()-1; j++) {
//             if (j > i+1 && nums[j] == nums[j - 1]) continue;
//             for(int k = j+1; k<nums.size(); k++) {
//                 if (k > j+1 && nums[k] == nums[k - 1]) continue;
//                 if(nums[i]+nums[j]+nums[k]==0) {
//                     v.push_back({nums[i],nums[j],nums[k]});
//                 }
//             }
//         }
//     }
//     return v;
// }

// TWO POINTER APPROACH

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> v;
    for(int i = 0; i<nums.size()-2; i++) {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j = i+1;
        int k = nums.size()-1;
        while(j<k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum==0) {
                v.push_back({nums[i],nums[j],nums[k]});
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;
                j++;
                k--;
            } else if(sum<0) {
                j++;
            } else {
                k--;
            }
        }
    }
    return v;
}

int main () {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> v = threeSum(nums);
    for(int i = 0; i<v.size(); i++) {
        for(int j = 0; j<v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
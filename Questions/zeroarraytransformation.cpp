#include<iostream>
#include<vector>
using namespace std;
// TLE
// bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
//     for(int i = 0; i<queries.size(); i++) {
//         for(int j = queries[i][0]; j<=queries[i][1]; j++) {
//             if(nums[j]>0) nums[j]--;
//         }
//     }
//     bool flag = true;
//     for(int i = 0; i<nums.size(); i++) {
//         if(nums[i]!=0) {
//             flag = false;
//             break;
//         }
//     }
//     return flag;
// }

bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    vector<int> diff (nums.size()+1,0);
    for(auto i : queries) {
        diff[i[0]]++;
        if (i[1] + 1<nums.size()) {
            diff[i[1]+1]--;
        }
    }
    int count = 0;
    for(int i = 0; i<nums.size(); i++) {
        count += diff[i];
        if(nums[i]>count) return false;
    }
    return true;
}

int main () {
    vector<int> nums = {1,0,1};
    vector<vector<int>> queries = {{0,2}};
    cout<<isZeroArray(nums,queries);
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array for two-pointer approach
    vector<vector<int>> v; // To store the triplets

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i

        int j = i + 1; // Left pointer
        int k = nums.size() - 1; // Right pointer

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k]; // Calculate the triplet sum

            if (sum == 0) { // Valid triplet found
                v.push_back({nums[i], nums[j], nums[k]}); // Store the triplet

                while (j < k && nums[j] == nums[j + 1]) j++; // Skip duplicates for j
                while (j < k && nums[k] == nums[k - 1]) k--; // Skip duplicates for k

                j++; // Move both pointers inward
                k--;
            } else if (sum < 0) {
                j++; // Need a larger sum, move left pointer
            } else {
                k--; // Need a smaller sum, move right pointer
            }
        }
    }

    return v; // Return all unique triplets
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
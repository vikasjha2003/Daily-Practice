#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> v ;

    // running sum

    // poor space complexity

    // for(int i = 0; i<nums.size(); i++) {
    //     if(i==0) v.push_back(nums[i]);
    //     else {
    //         v.push_back((v[i-1]+nums[i]));
    //     }
    // }

    for(int i = 1; i<nums.size(); i++) {
        nums[i] = nums[i] + nums[i-1];
    }
    for(int i : nums) {
        cout<<i<<" ";
    }
}
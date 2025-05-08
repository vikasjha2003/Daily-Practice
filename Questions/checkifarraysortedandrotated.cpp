#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& nums) {
    if(nums.size()<=1) return true;
    int count = 0;
    for(int i = 1; i<nums.size(); i++) {
        if(nums[i-1]>nums[i]) count++;
    }
    if(nums[0]<nums[nums.size()-1]) count ++;
    if(count<=1) return true;
    else return false;
}
int main () {
    vector<int> nums = {4,5,1,2,3};
    // intution - check how many times is ascending order broken, if 1 or more then one then true else false.
    cout<<check(nums);
}
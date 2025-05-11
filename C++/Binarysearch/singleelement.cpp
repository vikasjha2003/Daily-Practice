#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
    if(nums.size()==1) return nums[0];
    int lo = 0;
    int hi = nums.size()-1;
    while(lo<=hi) {
        int mid = lo + (hi - lo)/2;
        if(mid==0 && nums[mid]!=nums[mid+1]) return nums[mid];
        else if(mid == nums.size()-1 && nums[mid]!=nums[mid-1]) return nums[mid];
        else if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) {
            return nums[mid];
        } else if ((mid-lo)%2==1) {
            if(nums[mid-1]==nums[mid]) {
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        } else {
            if(nums[mid-1]==nums[mid]) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
    }
    return -1; // will never execute, just for the sake of returning
}
int main () {
    vector <int> num = {1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(num);
}
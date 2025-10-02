#include<iostream>
#include<vector>
using namespace std;
bool helper(vector<int>& nums,int sumt,int sum,int idx) {
    if(idx==nums.size()) return false;  // if idx exceeds size then end
    if(sum > sumt/2) return false;  // if current sum exceed total sum/ 2 then end
    if(sum == sumt/2) return true;  // if current sum = total sum/2 (success)
    return (helper(nums,sumt,sum,idx+1) || helper(nums,sumt,sum+nums[idx],idx+1)); // return true if it occurs in either case, no pick or  pick
}
bool can(vector<int>& nums) {
    int sumt = 0; 
    for(int val : nums) { // totral sum
        sumt += val;
    }
    if(sumt%2==1) return false; // check for odd
    else {
        if(helper(nums,sumt,0,0)) { // if not odd case
            return true;
        } else {
            return false;
        }
    }
}
int main () {
    vector<int> v = {1,4,11,5};
    if(can(v)) {
        cout<<"Yes equal sum partition is possible.";
    } else {
        cout<<"No equal sum partition not possible.";
    }
}
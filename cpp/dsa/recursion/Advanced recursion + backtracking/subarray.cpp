#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int> ans, vector<int> &nums, int i ) {
    if(i == nums.size()) {
        for(int i = 0; i<ans.size(); i++) {
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    subarray(ans,nums,i+1);
    // both conditions can be merged in 1 when using || condition
    if(ans.size()==0) {
        ans.push_back(nums[i]);
        subarray(ans,nums,i+1);
    } else if (ans[ans.size()-1]==nums[i-1]) {
        ans.push_back(nums[i]);
        subarray(ans,nums,i+1);
    }
}
int main () {
    vector<int> nums = {1,2,3,4};
    subarray({},nums,0);
} 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helper(vector<int>& nums, int target, int idx, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }
    if (target < 0) return;

    for (int i = idx; i < nums.size(); ++i) {
        if (i > idx && nums[i] == nums[i - 1]) continue;

        current.push_back(nums[i]);
        helper(nums, target - nums[i], i + 1, current, result);
        current.pop_back(); 
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> result;
    vector<int> r;
    helper(candidates,target,0,r,result);
    return result;
}
int main () {
    vector<int> v = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> final = combinationSum2(v,target);
    for(auto val : final) {
        for(auto i : val) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
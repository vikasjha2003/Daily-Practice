#include<iostream>
#include<vector>
using namespace std;
void quickSum(vector<int> &nums,int target, vector<vector<int>> &final, vector<int> ans, int idx) {
    if(target<0) return;
    if(target==0) {
        final.push_back(ans);
        return;
    }
    for(int i = idx ;i<nums.size(); i++) {
        ans.push_back(nums[i]);
        quickSum(nums,target-nums[i],final,ans,i);
        ans.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> final;
    quickSum(candidates,target,final,{},0);
    return final;
}
int main () {
    vector<int> v = {2,3,6,7,1,5};
    int target = 7;
    vector<vector<int>> v1 = combinationSum(v,target);
     for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++) {
            cout<<v1[i][j];
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// subsets 1
void subsets(vector<int>& nums,vector<int> ans, int idx, vector<vector<int>> &v) {
    if(idx==nums.size()) {
        v.push_back(ans);
        return;
    }
    subsets(nums,ans,idx+1,v);
    ans.push_back(nums[idx]);
    subsets(nums,ans,idx+1,v);
}

// subsets 2
void subset(vector<int> &nums, vector<int> ans, int idx, vector<vector<int>> &finale, bool flag) {
    if(idx==nums.size()) {
        finale.push_back(ans);
        return;
    }
    if(nums.size()==1) {
        if (flag==true) subset(nums,ans,idx+1,finale,true);
        ans.push_back(nums[idx]);
        subset(nums,ans,idx+1,finale,true);
        return;
    }
    if(idx<nums.size()-1 && nums[idx]==nums[idx+1]) {
        if (flag==true) subset(nums,ans,idx+1,finale,true);
        ans.push_back(nums[idx]);
        subset(nums,ans,idx+1,finale,false);
    } else {
        if (flag==true) subset(nums,ans,idx+1,finale,true);
        ans.push_back(nums[idx]);
        subset(nums,ans,idx+1,finale,true);
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> ans = {};
    vector<vector<int>> finale;
    subset(nums,ans,0,finale,true);
    return finale;
}

void display(vector<vector<int>> v) {
    for(int i = 0; i<v.size(); i++) {
        for(int j = 0; j<v[i].size(); j++) {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}

int main () {
    vector<int> arr = {1,2,2};
    vector<vector<int>> v = subsetsWithDup(arr);
    // subsets(arr,{},0,v);
    display(v);
}
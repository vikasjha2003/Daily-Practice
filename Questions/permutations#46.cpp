#include<iostream>
#include<vector>
using namespace std;

// permutation, self done :}

vector<int> helparray (vector<int> &a, int b) {
    vector<int> v ;
    for(int i = 0; i<a.size(); i++) {
        if(i==b) continue;
        else {
            v.push_back(a[i]);
        }
    }
    return v;
}

void helper (vector<int> ans, vector<int> &nums, vector<vector<int>> &final) {
    if(0 == nums.size()) {
        final.push_back(ans);
        return;
    }
    for(int i = 0; i<nums.size(); i++) {
        ans.push_back(nums[i]);
        vector<int> v = helparray(nums,i);
        helper(ans,v,final);
        ans.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> final;
    helper({},nums,final);
    return final;
}

int main () {
    vector<int> v = {1,1,2};
    vector<vector<int>> v1 = permute(v);
    for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++) {
            cout<<v1[i][j];
        }
        cout<<endl;
    }
}
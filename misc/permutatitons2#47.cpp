#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// permutations 2, self done :)  

vector<int> sumarray (vector<int> &a, int b) {
    vector<int> v ;
    for(int i = 0; i<a.size(); i++) {
        if(i==b) continue;
        else {
            v.push_back(a[i]);
        }
    }
    return v;
}

// void helper (vector<int> ans, vector<int> &nums, vector<vector<int>> &final, bool flag) {
//     if(0 == nums.size()) {
//         if(final.size()<1) {
//             final.push_back(ans);
//             return;
//         } else {
//             if(final[final.size()-1]!=ans) {
//                 final.push_back(ans);
//                 return;
//             }
//         }
//     }
//     for(int i = 0; i<nums.size(); i++) {
//         if(i<nums.size()-1 && nums[i] == nums[i+1]) {
//             ans.push_back(nums[i]);
//             vector<int> v = helparray(nums,i);
//             helper(ans,v,final,false);
//             ans.pop_back();
//         } else {
//             ans.push_back(nums[i]);
//             vector<int> v = helparray(nums,i);
//             if (flag == true) helper(ans,v,final,true);
//             ans.pop_back();
//         }
//     }
// }

// A better approach to deal with duplicates

void helper (vector<int> ans, vector<int> &nums, vector<vector<int>> &final, bool flag) {
        if(0 == nums.size()) {
            if(final.size()<1) {
                final.push_back(ans);
                return;
            } else {
                if(final[final.size()-1]!=ans) {
                    final.push_back(ans);
                    return;
                }
            }
        }
        for(int i = 0; i<nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            ans.push_back(nums[i]);
            vector<int> v = sumarray(nums,i);
            helper(ans,v,final,false);
            ans.pop_back();
        
        }
    }

vector<vector<int>> permute(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> final;
    helper({},nums,final,true);
    return final;
}

int main () {
    vector<int> v = {1,1,2,2};
    vector<vector<int>> v1 = permute(v);
    for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++) {
            cout<<v1[i][j];
        }
        cout<<endl;
    }
}
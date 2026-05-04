#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>> &v, int n, int k, int i, vector<int> &ans) {
    if(ans.size() == k) {
        v.push_back(ans);
        return;
    }
    while(i<=n) {
        ans.push_back(i);
        helper(v,n,k,i+1,ans);
        ans.pop_back();
        i++;
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> v;
    vector<int> ans;
    helper(v,n,k,1,ans);
    return v;
}
int main () {
    int n = 4;
    int k = 2;
    vector<vector<int>> nums = combine(n,k);
    for(auto q : nums) {
        for(auto a : q) {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int> ans, vector<int> &nums, int idx) {
    if(idx==nums.size()) { // base case, terminate when idx exceeds array size.
        for(int i : ans) { // condition for printing, can be altered to simply solve other variations
            cout<<i;
        }
        cout<<endl;
        return;
    }
    subsets(ans,nums,idx+1); // no pick call
    ans.push_back(nums[idx]); 
    subsets(ans,nums,idx+1); // pick call
}
int main () {
    vector<int> v = {1,2,3};
    subsets({},v,0);
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        unordered_set<int> st;
        for(int i = 0; i<n; i++) {
            cin>>nums[i];
            st.insert(nums[i]);
        }
        if(st.size() == 1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            sort(nums.begin(),nums.end());
            if(nums[1] != nums[n-1]) swap(nums[0],nums[n-1]);
            for(int i : nums) {
                cout<<i<<" ";
            } cout<<endl;
        }
        
    }
}
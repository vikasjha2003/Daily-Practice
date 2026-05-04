#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        int count = 0;
        for(int i = 0; i<n; i++) {
            cin>>nums[i];
            if(i>0) {
                if(nums[i-1] % 2 == nums[i] % 2) count++;
            }
        }
        cout<<count<<endl;       
    }
}
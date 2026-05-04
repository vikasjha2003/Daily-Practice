#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        unordered_map<int,int> mpp;
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            mpp[a]++;
        }
        if(mpp.size() > 2) {
            cout<<"NO\n";
        } else if (mpp.size() == 1) {
            cout<<"YES\n";
        } else {
            int freq1 = -1, freq2 = -1;
            for(auto & it : mpp) {
                freq1 = freq2;
                freq2 = it.second;
            }
            if(freq1 == freq2 || abs(freq2 - freq1) == 1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
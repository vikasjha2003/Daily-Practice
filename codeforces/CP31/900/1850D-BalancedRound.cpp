#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int cnt = 1;
        int max_cnt = 1;
        for(int i = 0; i<n-1; i++) {
            if(abs(arr[i] - arr[i+1]) <= k) {
                cnt++;
                max_cnt = max(max_cnt,cnt);
            }
            else cnt = 1;
        }
        cout<<n - max_cnt<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        int prev;
        cin>>prev;
        int cur = prev , res = prev;
        for(int i = 1; i<n; i++) {
            cin>>cur;
            res = max(res,cur - prev);
            prev = cur;
        }
        res = max(res,(x-cur)*2);
        cout<<res<<endl;
    }
}
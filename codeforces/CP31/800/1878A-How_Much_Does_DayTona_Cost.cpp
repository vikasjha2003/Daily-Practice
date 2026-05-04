#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        bool flag = false;
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            if(a == k) flag = true;
        }
        if(!flag) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}
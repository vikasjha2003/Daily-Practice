#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<char> s (n);
        for(int i = 0; i<n; i++) {
            cin>>s[i];
        }        
        int suc_count = 0;
        int count = 0;
        int res = 0; 
        for(int i = 0; i<n; i++) {
            if(s[i] == '.') {
                res++;
                count++;
            } else {
                count = 0;
            }
            suc_count = max(suc_count, count);
        }
        if(suc_count > 2) cout<<2<<endl;
        else cout<<res<<endl;
    }
}
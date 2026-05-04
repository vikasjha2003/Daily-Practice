#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        unordered_set<int> st;
        int res = 0;
        bool flag = true;
        for (int i = 0; i<n; i++) {
            int a;
            cin>>a;
            res ^= a;
            if(st.find(a) != st.end()) flag = false;
            else st.insert(a);
        }
        if(flag) cout<<res<<endl;
        else cout<<-1<<endl;
    }
}
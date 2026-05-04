#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n ;
        cin>>n;
        vector<int> v(n);
        unordered_set<int> st;
        for(int i = 0; i<n; i++) {
            cin>>v[i];
            st.insert(v[i]);
        }
        cout<<st.size()<<endl;
    }
    
}
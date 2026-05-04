#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v (n);
        bool odd = false;
        bool even = false;
        for(int i = 0; i<n; i++) {
            cin>>v[i];
            if(v[i]%2 == 0) {
                if(!even) even = true;
            } else {
                if(!odd) odd = true;
            }
        }
        if(odd && even) sort(v.begin(),v.end());
        for(int i = 0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
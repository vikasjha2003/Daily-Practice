#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int noz = 0, noo = 0;
        vector<int> v (n);
        for(int i = 0; i<n; i++) {
            cin>>v[i];
            if(v[i] == 0) noz++;
            else if(v[i] == -1) noo++;
        }
        if(noo%2 == 0) {
            cout<<noz<<endl;
        } else {
            cout<<noz+2<<endl;
        }
    }
}
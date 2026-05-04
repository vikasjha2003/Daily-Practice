#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int eff = 0;
        for(int i = 0; i<n-1; i++) {
            int a;
            cin>>a;
            eff -= a;
        }
        cout<<eff<<endl;
    }
}
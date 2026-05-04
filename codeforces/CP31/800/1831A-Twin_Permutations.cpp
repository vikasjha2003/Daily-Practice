#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            cout<<n - a + 1<<" ";
        } cout<<endl;
    }
}
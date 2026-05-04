#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int k, x;
        cin>>k>>x;
        if(k % x == 0) {
            cout<<2<<endl;
            cout<<k-1<<" "<<1<<endl;
        } else {
            cout<<1<<endl;
            cout<<k<<endl;
        } 
    }
}
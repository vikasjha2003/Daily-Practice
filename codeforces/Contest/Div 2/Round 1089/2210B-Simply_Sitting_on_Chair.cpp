#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int cnt = 0;
        for(int i = 1; i<=n; i++) {
            int a ;
            cin>>a;
            if (a <= i) cnt++;
        }
        cout<<cnt<<endl;
    }
}
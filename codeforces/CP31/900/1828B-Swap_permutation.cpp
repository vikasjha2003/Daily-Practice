#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int prev = 0;
        for(int i = 1; i <= n; i++) {
            int a; cin >> a;
            if(a == i) continue;
            int cur = abs(a-i);
            if(i == 1) prev = cur;
            else prev = gcd(prev,cur);
        }
        cout<<prev<<endl;
    }
}
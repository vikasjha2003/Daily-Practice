#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        long long a,b,n; 
        cin>>a>>b>>n;
        long long res = b-1;
        for(int i = 0; i<n; i++) {
            long long c ;
            cin>>c;
            res += min(c+1,a) - 1;
        }
        cout<<res+1<<endl;
    }
}
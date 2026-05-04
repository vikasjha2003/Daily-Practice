#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int prev;
        cin>>prev;
        bool flag = true;
        for(int i = 1; i<n; i++) {
            int cur ;
            cin>> cur;
            if(prev > cur) flag = false;
            prev = cur;
        }
        if(!flag) cout<<1<<endl;
        else cout<<n<<endl;
    }
}
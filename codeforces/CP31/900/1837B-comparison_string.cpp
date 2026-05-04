#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int cnt = 1;
        int max_cnt = 1;
        char prev = ' ';
        for(int i = 0; i<n; i++) {
            char cur;
            cin>>cur;
            if(cur == prev) {
                cnt++;
                max_cnt = max(max_cnt,cnt);
            }
            else cnt = 1;
            prev = cur;
        }
        cout<<max_cnt + 1<<endl;        
    }
}
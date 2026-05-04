#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n , k;
        cin>>n>>k;
        vector<char> arr (26,0);
        for(int i = 0; i<n; i++) {
            char c;
            cin>>c;
            arr[c-'a']++;
        }
        int cnt = 0;
        for(int i = 0; i<26; i++) {
            if(arr[i] % 2 == 1) cnt++;
        }
        if(cnt-1 > k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
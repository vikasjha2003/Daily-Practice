#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string st, str;
        cin>>st>>str;
        sort(st.begin(), st.end());
        sort(str.begin(), str.end());
        if (st == str) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
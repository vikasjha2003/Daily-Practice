#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        stack<char> st;
        for(int i = 0; i<n; i++) {
            char c ;
            cin>>c;
            if(!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
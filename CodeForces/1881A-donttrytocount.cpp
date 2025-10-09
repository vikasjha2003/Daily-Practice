#include<bits/stdc++.h>
using namespace std;
int main () {
    int t ;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n ,m;
        cin>>n>>m;
        string st,str;
        cin>>st;
        cin>>str;
        int count = 0;
        bool flag = false;
        while(n<100) {
            if(n>=m) {
                for(int i = 0; i<n - m +1; i++) {
                    if(st.substr(i,m) == str) {
                        flag = true;
                        break;
                    }
                }
                if(flag) break; 
            }
            n += n;
            st += st;
            count++;
        }
        if(flag) cout<<count<<endl;
        else cout<<-1<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a , b;
        cin>>a>>b;
        int xk , yk;
        cin>>xk>>yk;
        int xq , yq;
        cin>>xq>>yq;

        int arr [8][2] = {  {a,b},{a,-b},{-a,b},{-a,-b},
                            {b,a},{b,-a},{-b,a},{-b,-a}
                        };

        set<pair<int,int>> st;

        for(int i = 0; i<8; i++) {
            int x = xk + arr[i][0];
            int y = yk + arr[i][1];
            st.insert({x,y});
        }
        int res = 0;
        for(int i = 0; i<8; i++) {
            int x = xq + arr[i][0];
            int y = yq + arr[i][1];
            if(st.find({x,y}) != st.end()) {
                res++;
            }
        }
        if(a == b) cout<< res / 2<<endl;
        else cout<<res<<endl;
    }
}
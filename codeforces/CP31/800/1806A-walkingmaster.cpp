#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a , b , c , d;
        cin>>a>>b>>c>>d;
        if(b > d) cout<<-1<<endl;
        else {
            int diff = d - b;
            a += diff;
            b += diff;
            if(a < c) {
                cout<<-1<<endl;
            } else {
                diff += a - c;
                cout<<diff<<endl;
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int a , b , c;
        cin>>a>>b>>c;
        b += c/2;
        a += c - c/2;
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;        
    }
}
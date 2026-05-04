#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        int sum = 0;
        int a ;
        for(int i = 0; i< n; i++) {
            cin>>a;
            sum += a;
        }       
        if(sum % 2 == 1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
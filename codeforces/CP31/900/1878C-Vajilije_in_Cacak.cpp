#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long n , k , x;
        cin>>n>>k>>x;
        long long val = (n * (n+1) / 2) - (((n-k) * (n-k+1))/2);
        if(val < x) cout<<"No"<<endl;
        else if((k * (k+1)/2) > x) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;    
    }
}
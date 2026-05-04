#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a ;
        cin >> a;
        vector<int> res;
        res.push_back(a);
        for(int i = 0; i<n-1; i++) {
            cin>>a;
            if(a < res.back()) {
                res.push_back(a);
            }
            res.push_back(a); 
        }
        cout<<res.size()<<endl;
        for(int i : res) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
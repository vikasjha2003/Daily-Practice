#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n < 3) {
            for(int i = 0; i<n; i++) {
                int a;
                cin>>a;
                cout<<n<<" ";
            } cout<<endl;
        } else {
            for(int i = 0; i<n; i++) {
                int a ;
                cin>>a;
                cout<<2<<" ";
            } cout<<endl;
        }
    }
}
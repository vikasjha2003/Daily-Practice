#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n, alex = 0, bob = 0;
        cin>>n;
        while(n>2) {
            alex++;
            bob++;
            n -= 2;
        }
        cout<<alex<<endl;
    }
}
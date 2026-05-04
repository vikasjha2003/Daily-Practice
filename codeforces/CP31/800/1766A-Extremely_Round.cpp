#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n<10) cout<<n<<endl;
        else if (n < 100) {
            cout<<n/10 + 9<<endl;
        } else if (n < 1000) {
            cout<<n/100 + 9*2<<endl;
        } else if (n < 10000) {
            cout<<n/1000 + 9*3<<endl;
        } else if (n < 100000) {
            cout<<n/10000 + 9*4<<endl;
        } else {
            cout<<n/100000 + 9*5<<endl;
        }      
    }
}
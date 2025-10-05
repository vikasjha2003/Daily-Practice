#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n ;
        cin>>n;
        int mini = 9;
        while(n>0) {
            mini = min(mini,n%10);
            n/=10;
        }
        cout<<mini<<endl;
    }
}
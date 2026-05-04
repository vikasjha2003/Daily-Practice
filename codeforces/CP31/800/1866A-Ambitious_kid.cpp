#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int res = INT_MAX;
    while(n--) {
        int a;
        cin>>a;
        res = min(res, abs(a));
    }
    cout<<res<<endl;
}
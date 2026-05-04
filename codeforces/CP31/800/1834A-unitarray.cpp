#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        int sum = 0;
        int prod = 1;
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            sum += a;
            prod *= a;
        }
        int res = 0;
        if(sum < 0) {
            int change = abs(sum);
            if(change%2 == 1) {
                change = change / 2 + 1;
            } else {
                change = change / 2;
            }
            res += change;
            if(change % 2 == 1) prod *= -1;
        }
        if(prod == -1) res++;
        cout<<res<<endl;
    }
}
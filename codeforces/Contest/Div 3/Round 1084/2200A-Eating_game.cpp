#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int maxi = 0;
        unordered_map<int,int> freq;
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            freq[a]++;
            if(a > maxi) {
                maxi = a;
            }
        }
        cout<<freq[maxi]<<endl;
    }
}
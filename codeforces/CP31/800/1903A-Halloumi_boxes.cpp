#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr (n);
        bool flag = true;
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
            if (i>0 && arr[i-1] > arr[i]) {
                flag = false;
            }
        }
        if(k == 1 && !flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
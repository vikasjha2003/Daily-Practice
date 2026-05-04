#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long n, c , k;
        cin>>n>>c>>k;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i = 0; i<n; i++) {
            if(arr[i] <= c) {
                if(k == 0) {
                    c += arr[i];
                } else {
                    int mini = min(c - arr[i],k);
                    if(mini <= k) {
                        k -= mini;
                        arr[i] += mini;
                    } else {
                        k = 0;
                        arr[i] += k;
                    }
                    c += arr[i];
                }
            } else break;
        }
        cout<<c<<endl;
    }
}
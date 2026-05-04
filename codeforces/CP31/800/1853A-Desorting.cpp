#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n ;
        cin>>n;
        vector<int> arr(n);
        bool sorted = true;
        int min_diff = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(i > 0 && arr[i-1] > arr[i]) {
                sorted = false;
            }
            if(i > 0) {
                min_diff = min(min_diff , arr[i] - arr[i-1]);
            }
        }
        if(sorted == false) cout<<0<<endl;
        else cout<<(min_diff / 2) + 1<<endl;    
    }
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        n *= 3;
        vector<int> arr(n,0);
        int cnt = 1;
        for(int i = 0; i<n; i += 3) {
            arr[i] = cnt;
            cnt++;
        }
        for(int i = 0; i<n; i++) {
            if(arr[i] == 0) {
                arr[i] = cnt;
                cnt++;
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
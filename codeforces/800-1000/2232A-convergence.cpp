#include<bits/stdc++.h>
using namespace std;
int main () {
    int t ;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int> arr (n);

        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int median = 0;
        if(n % 2 == 1) {
            median = arr[n/2];
        } else {
            median = (arr[n/2] + arr[(n/2)-1] )/ 2;
        }

        int cnt = 0;

        for(int i = 0; i < n/2; i++) {
            if(arr[i] != median || arr[n-i-1] != median) {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}
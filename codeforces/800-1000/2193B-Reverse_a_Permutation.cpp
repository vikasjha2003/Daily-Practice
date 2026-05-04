#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr (n);
        int idx = -1;
        int end = -1;
        for(int i = 0; i< n; i++) {
            cin>>arr[i];
            if(idx != -1 && arr[i] + idx == n) end = i;
            if(idx == -1 && arr[i] + i != n) idx = i;
        } 
        if(idx != -1) {
            while(idx < end) {
                swap(arr[idx],arr[end]);
                idx++;
                end--;
            }
        }
        for(int q : arr) cout<<q<<" ";
        cout<<endl;
    }
}
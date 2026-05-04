#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }

        for(int i = 0; i<n; i++) {
            int min_count = 0;
            int max_count = 0;
            for(int j = i+1; j<n; j++) {
                if (arr[i] > arr[j]) min_count++;
                else if (arr[i] < arr[j]) max_count++;
            }
            arr[i] = max(min_count,max_count);
        }

        for(int i : arr) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
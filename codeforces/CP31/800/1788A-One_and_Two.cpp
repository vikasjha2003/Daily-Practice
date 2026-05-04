#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        int count = 0;
        for(int i = 0; i<n; i++) {
            cin>>nums[i];
            if(nums[i] % 2 == 0) count++;
        }
        if(count % 2 == 1) cout<<-1<<endl;
        else if (count == 0) cout<<1<<endl;
        else {
            int a = count;
            for(int i = 0; i<n; i++) {
                if(nums[i] % 2 == 0) a--;
                if(a == count / 2) {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}
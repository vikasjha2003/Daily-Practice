// sum <= k
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int> nums = {2,5,1,7,10};
    int k = 14;
    int n = nums.size();
    int maxlen = 0;
    // for(int i = 0; i<n; i++) { // Brute force
    //     int sum = 0;
    //     for (int j = i; j<n; j++) {
    //         sum += nums[j];
    //         if(sum<=k) {
    //             maxlen = max(maxlen,j-i+1);
    //         }
    //     }
    // }
    int sum = 0;
    int l = 0, r = 0;
    while(r<n) {
        sum += nums[r];       
        while(sum>k) {
            sum -= nums[l];
            l++;
        }
        maxlen = max(maxlen,r - l +1);
        r++;
    }
    cout<<maxlen;
}
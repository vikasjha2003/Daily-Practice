#include<iostream>
#include<vector>
using namespace std;
int main () {
    int l;
    cout<<"Enter the length of array: ";
    cin>>l;
    cout<<"Enter the array: "<<endl;
    vector<int> nums(l);
    for(int i=0; i<l; i++) {
        cin>>nums[i];
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
    // int zero = 0;
    // int one = 0;
    // int two = 0;
    // for(int i = 0; i < l; i++) {
    //     if (nums[i]==1) {
    //         one++;
    //     } else if (nums[i]==0) {
    //         zero++;
    //     } else {
    //         two++;
    //     }
    // }
    // for(int i = 0; i<l; i++) {
    //     if (i<zero) {
    //         nums[i]=0;
    //     } else if (i>=zero && i<(zero+one)) {
    //         nums[i]=1;
    //     } else {
    //         nums[i]=2;
    //     }
    // }

    // one pass approach or Dutch flag approach

    int lo = 0;
    int mid = 0;
    int hi = l-1;
    while(mid<=hi) {
        if(nums[mid]==2) {
            int temp = nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
        } else if (nums[mid]==0) {
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            mid++;
            lo++;
        } else {
            mid++;
        }
    }

    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
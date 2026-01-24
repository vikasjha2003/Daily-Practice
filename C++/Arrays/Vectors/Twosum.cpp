#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    int t,l;
    cout<<"Enter the target: ";
    cin>>t;
    cout<<"Enter the length of array: ";
    cin>>l;
    cout<<"Enter the array: "<<endl;
    vector<int> nums(l);
    for(int i=0; i<l; i++) {
        cin>>nums[i];
    }

    // BRUTE FORCE

    // for(int i = 0; i<l-1; i++) {
    //     for(int j = i+1; j<l; j++) {
    //         if(nums[i]+nums[j]==t) {
    //             cout<<"("<<i<<","<<j<<")"<<" "<<","<<" ";
    //         }
    //     }
    // }

    // TWO POINTER
    
    sort(nums.begin(),nums.end());
    int i = 0;
    int j = nums.size()-1;
    while(i<j) {
        if(nums[j]>t) {
            j--;
        } else if(nums[i]+nums[j]==t) {
            cout<<nums[i]<<" + "<<nums[j]<<" = "<<t;
            break;
        } else if(nums[i]+nums[j]<t) {
            i++;
        } else {
            j--;
        }
    }
}
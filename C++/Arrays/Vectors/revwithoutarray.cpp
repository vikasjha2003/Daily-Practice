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
    for(int i = 0; i <= (l-1)/2; i++) {   // Can also be done using temp.
        nums[i] = nums[i] + nums[(l-1-i)];
        nums[(l-1-i)] = nums[i] - nums[(l-1-i)];
        nums[i] = nums[i] - nums[(l-1-i)];
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
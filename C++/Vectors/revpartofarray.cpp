#include<iostream>
#include<vector>
using namespace std;
void reversepart (vector<int> &nums, int s, int e) {
    for(int i = s; i<=e; i++) {
        int temp = nums[i];
        nums[i] = nums[e];
        nums[e] = temp;
        e--;
    }
}
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
    reversepart(nums,3,9);
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
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

    int lo = 0; // act as a wall for 0, all elements to its left will be 0
    int mid = 0; // for traversal
    int hi = l-1; // act as a wall for 2, all elements to its right will be 2
    while(mid<=hi) { // since mid is for traversal when it reaches hi the array is sorted
        if(nums[mid]==2) {
            swap(nums[mid],nums[hi]); // placing 2 at its correct place
            hi--; // decreasing the range by decreasing hi
        } else if (nums[mid]==0) {
            swap(nums[mid],nums[lo]); // placing 1 at its correct place
            mid++;
            lo++; // decreasing the range by increasing lo 
        } else {
            mid++; // in case of 1 just traverse
        }
    }

    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
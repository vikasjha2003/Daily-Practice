#include<iostream>
#include<vector>
using namespace std;
void reversepart (vector<int> &nums, int s, int e) { // a function to reverse a part of the vector
    for(int i = s; i<=e; i++) {
        swap(nums[i],nums[e]); // simply swapping the first and last digit in the given range.
        e--; // reducing the range
    }
}
int main () {
    vector<int> nums = {-1,-100,3,99};
    int k = 2;
    if(k>=nums.size()) k=k%nums.size(); // if k = nums.size() or greater then it then the rotation will just repeat itself hence we check for it.
    int v = nums.size()-1; // end of the vector
    reversepart(nums,0,v); // completely reverses the vector {99,3,-100,-1}
    reversepart(nums,0,(k-1)); // places the rotated end in correct order {3,99,-100,-1}
    reversepart(nums,k,v); // places the other rotated end in correct order {3,99,-1,-100}
    for(int val : nums) { // using a for each loop to print the vector.
        cout<<val<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> nums = {0,1,0,3,12};
    int i = 0; // this pointer marks non zero numbers, all numbers to its left will be non zero always.
    for(int j = 0; j<nums.size(); j++) { // simple traversal of loop
        if(nums[j]!=0) { // if non zero number found then moving it to i index
            swap(nums[i],nums[j]);
            i++; // i++ since all numbers to the left are sure to be non zero
        }
    }
    for(int val : nums) { // using a for each loop to print the vector.
        cout<<val<<" ";
    }
}
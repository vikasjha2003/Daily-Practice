#include<iostream>
#include<vector>
using namespace std;
// brute force kinda
// vector<int> pivotArray(vector<int>& nums, int pivot) {
//     vector<int> arr;
//     for(int i = 0; i<nums.size(); i++) {
//         if(nums[i]<pivot) arr.push_back(nums[i]);
//     }
//     for(int i = 0; i<nums.size(); i++) {
//         if(nums[i]==pivot) arr.push_back(nums[i]);
//     }
//     for(int i = 0; i<nums.size(); i++) {
//         if(nums[i]>pivot) arr.push_back(nums[i]);
//     }
//     return arr;
// }

// trying to optimize slightly
vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> arr1;
    vector<int> arr2;
    int count = 0;
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i]<pivot) arr1.push_back(nums[i]);
        if(nums[i]>pivot) arr2.push_back(nums[i]);
        if(nums[i]==pivot) count++;
    }
    int j = 0;
    for(int i = 0; i<nums.size(); i++) {
        if(i<arr1.size()) nums[i] = arr1[i];
        else if(i<arr1.size()+count) nums[i] = pivot;
        else {
            nums[i] = arr2[j];
            j++;
        }
    }
    return nums;
}
int main () {
    vector<int> nums = {9,12,5,10,14,3,10};
    int piv = 10;
    vector<int> arr = pivotArray(nums,piv);
    for(int i : arr) {
        cout<<i<<" ";
    }cout<<endl;
}
#include<iostream>
#include<vector>
using namespace std;

// Brute force will be to just linear search but that will give TLE

int search(vector<int>& nums, int target) {
    int st = 0;
    int end = nums.size()-1;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(nums[mid] == target) {
            return mid;
        }
        if(nums[st]<=nums[mid]) {
            if(target>=nums[st] && target<nums[mid]) {
                end = mid-1;
            } else {
                st = mid+1;
            }
        } else {
            if (target > nums[mid] && target <= nums[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return mid;
    }
}
int main () {
    int k;
    cout<<"Enter the target index: ";
    cin>>k;
    vector<int> v = {4,5,6,7,0,1,2};
    if(search(v,k)==-1) {
        cout<<"Target is not present in array.";
    } else {
        cout<<"Target is present at "<<search(v,k);
    }
}
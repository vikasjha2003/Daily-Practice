#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1; // Initialize search boundaries

    while (low < high) {
        int mid = low + (high - low) / 2; // Calculate mid index (to avoid overflow)

        if (nums[mid] > nums[mid + 1]) // If current element is greater than next
            high = mid; // Peak lies on the left side (or is mid)
        else
            low = mid + 1; // Peak lies on the right side
    }

    return low; // low == high → peak element index
}

int main () {
    vector<int> nums = {1,2,3,1};
    cout<<"The  index of peak element is : "<<findPeakElement(nums);
}
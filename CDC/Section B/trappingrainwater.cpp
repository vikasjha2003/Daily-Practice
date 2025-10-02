#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1; // Two pointers
    int leftMax = 0, rightMax = 0, water = 0; // Track max heights and water collected

    while (left < right) {
        if (height[left] < height[right]) { // Left is lower, process left side
            if (height[left] >= leftMax) // Update leftMax if current is greater
                leftMax = height[left];
            else
                water += leftMax - height[left]; // Water = leftMax - current height
            left++; // Move left pointer
        } else { // Right is lower or equal
            if (height[right] >= rightMax) // Update rightMax if current is greater
                rightMax = height[right];
            else
                water += rightMax - height[right]; // Water = rightMax - current height
            right--; // Move right pointer
        }
    }

    return water; // Return total trapped water
}

int main () {
    vector<int> nums = {1,0,0,2,3,1,4,6};
    cout<<"The stored water is: "<<trap(nums);
}
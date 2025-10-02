#include<iostream>
#include<vector>
using namespace std;
vector<int> subarraySum(vector<int>& arr, int S) {
    int n = arr.size(); // Total number of elements
    int start = 0, end = 0; // Window pointers
    int sum = 0; // Current window sum

    while (end <= n) { // Iterate until end crosses array
        if (sum < S) { // Expand window if sum is too small
            if (end == n) break; // Avoid out-of-bounds
            sum += arr[end++]; // Add next element to window
        }
        else if (sum > S) { // Shrink window from the left
            sum -= arr[start++]; // Remove element at start
        }
        else { // Found a valid subarray
            return {start + 1, end}; // Return 1-based index range
        }
    }

    return {-1}; // No valid subarray found
}

int main () {
    vector<int> nums = {1,2,5,6};
    int s = 8;
    vector<int> range = subarraySum(nums,s); // the index range, both inclusive
    for(int val : range) {
        cout<<val<<" ";
    }
}
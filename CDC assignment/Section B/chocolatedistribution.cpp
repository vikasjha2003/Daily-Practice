#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMinDiff(vector<int>& arr, int m) {
    if (m == 0 || arr.size() < m) return 0; // No students or not enough packets

    sort(arr.begin(), arr.end()); // Sort packets to compare consecutive groups

    int minDiff = INT_MAX; // Initialize minimum difference

    for (int i = 0; i + m - 1 < arr.size(); i++) { // Slide a window of size m
        int diff = arr[i + m - 1] - arr[i]; // Difference between max and min in the window
        minDiff = min(minDiff, diff); // Update minimum difference
    }

    return minDiff; // Return the least possible difference
}
int main () {
    vector<int> nums = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout<<"The minimum difference is : "<<findMinDiff(nums,m);
}
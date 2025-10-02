#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    vector<int> nums = {16,17,4,3,5,2}; // leaders = {17,5,2};
    int rmax = nums[nums.size()-1]; // to store the right maximum value
    vector<int> v; // to return the leaders
    for(int i = nums.size()-1; i>=0; i--) { // reverse traversal so that we can keep updating left max
        if(nums[i]>= rmax) { // if nums[i] is greater than right max then it will also be greater then all other right values hence no need to compare with all the values. 
            v.push_back(nums[i]); // adding leaders in v
            rmax = nums[i]; // updating the new right maximum
        }
    }
    reverse(v.begin(), v.end()); // reversing so that the order is restored
    for(int val : v) { // printing the leaders
        cout<<val<<" ";
    }
}
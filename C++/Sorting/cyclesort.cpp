#include<iostream>
#include<vector>
using namespace std;
// Only apply if array given 1-n or 0-n
void cycle(vector<int> &nums) {
    int i = 0;
    while(i<nums.size()) {
        int idx = nums[i] -1;
        if(i == idx) i++;
        else swap(nums[i],nums[idx]); // placing each element at their correct index
    }
}
int main () {
    vector<int> v = {5,4,3,2,1};
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
    cycle(v);
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
}
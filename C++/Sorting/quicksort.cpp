#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &nums,int si, int ei) {
    int pivotelement = nums[(si+ei)/2];
    int count = 0;
    for(int i = si; i<=ei; i++) {
        if(i==(si+ei)/2) continue;
        if(nums[i]<=pivotelement) count++;
    }
    int pivotidx = count + si;
    swap(nums[(si+ei)/2],nums[pivotidx]);
    int i = si;
    int j = ei;
    while(i<pivotidx && j>pivotidx) {
        if(nums[i]<=pivotelement) i++;
        else if(nums[j]>pivotelement) j--;
        else if (nums[i]>nums[j]) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(vector<int> &nums,int si,int ei) {
    if(si>=ei) return;
    // partition
    int pi = partition(nums,si,ei);
    // recursion
    quicksort(nums,si,pi-1);
    quicksort(nums,pi+1,ei);
}
int main () {
    vector<int> nums = {5,1,8,2,7,6,3,4};
    for(int val : nums) {
        cout<<val<<" ";
    }cout<<endl;
    quicksort(nums,0,nums.size()-1);
    for(int val : nums) {
        cout<<val<<" ";
    }cout<<endl;
}
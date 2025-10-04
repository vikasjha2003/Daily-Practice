#include<iostream> // this one was tough since I was wrapping around, apart from that pretty easy.
#include<vector>
using namespace std;
bool helper(vector<int> &nums, int i,vector<int> &checked) { // jump game 3
    if(i<0 || i>=nums.size()) return false; // will store 0
    if(nums[i] == 0) return checked[i] = true; // will store 1
    if(checked[i] != -1) return checked[i]; // memoization check
    checked[i] = false; // to avoid infinite loop
    return checked[i] = (helper(nums,i+nums[i],checked) || helper(nums,i-nums[i],checked));
}
int main () {
    vector<int> arr = {4,2,3,0,3,1,2};
    int start = 0;
    vector<int> dp(arr.size(),-1);
    cout<<helper(arr,start,dp);
}
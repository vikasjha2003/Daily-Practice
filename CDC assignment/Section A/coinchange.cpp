#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int> &nums, int amount, int num) {
    if(amount<0) return INT_MAX; // base cases
    if(amount==0) return num;  // returning num because it keeps track of number of coins used.
    int minii = INT_MAX; // keeping track of minimum no. of coins
    for(int i = 0; i<nums.size(); i++) {
        int a = helper(nums,amount-nums[i],num+1);
        minii = min(minii,a);  // updating miniumum value
    }    
    return minii;
}
int coinChange(vector<int>& coins, int amount) {
    int a = helper(coins,amount,0); 
    if(a == INT_MAX) return -1;  // no possible combinations
    else return a;
}
int main () {
    vector<int> nums = {1,2,5};
    int amount = 11;
    cout<<"The minimum number of coins to make this amount is: "<<coinChange(nums,amount);
}
#include<iostream>
#include<vector>
using namespace std;
// int maximumEnergy(vector<int>& energy, int k) { // brute force approach / TLE
//     int maxi = INT_MIN;
//     for(int i = 0; i<energy.size(); i++) {
//         int sum = 0;
//         for(int j = i; j<energy.size(); j+=k) {
//             sum += energy[j];
//         }
//         maxi = max(maxi,sum);
//     }
//     return maxi;
// }
int helper(vector<int>& energy, int k, int i, vector<int> &dp) {
    if(i>=energy.size()) return 0;
    if(dp[i] != -1) return dp[i];
    int a = energy[i] + helper(energy,k,i+k,dp);
    return dp[i] = a;
}
int maximumEnergy(vector<int>& energy, int k) { 
    int maxi = INT_MIN;
    vector<int> dp (energy.size(),-1);
    for(int i = 0; i<energy.size(); i++) {
        int a = helper(energy,k,i,dp);
        maxi = max(maxi,a);
    }
    return maxi;
}
int main () {
    int k = 3;
    vector<int> nums = {5,2,-10,-5,1};
    cout<<"The maximum possible energy is: "<<maximumEnergy(nums,k);
}
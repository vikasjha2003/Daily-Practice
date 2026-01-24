// #1402
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// worked.
// aiming to calculate like-time coefficient in all cases and simply returning the maximum of these.

int maxSatisfaction(vector<int>& satisfaction) {
    sort(satisfaction.begin(),satisfaction.end());
    vector<int> sat;
    for(int i = 0; i <satisfaction.size(); i++) {
        int count = 1;
        int sum = 0;
        for(int j = i; j<satisfaction.size(); j++) {
            sum += satisfaction[j]*count;
            count++;
        }
        sat.push_back(sum);
    }
    int maxi = 0;
    for(int i = 0; i<sat.size(); i++) {
        maxi = max(maxi,sat[i]);
    }
    return maxi;
}

int main () {
    vector<int> nums = {4,3,2};
    cout<<maxSatisfaction(nums);
}
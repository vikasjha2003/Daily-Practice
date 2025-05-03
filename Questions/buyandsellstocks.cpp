#include<iostream>
#include<vector> // Not correct yet, check the leetcode one and then fix on your own
using namespace std;

// BRUTE FORCE

int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    for(int i = 0; i<prices.size()-1; i++) {
        for(int j = i+1; j<prices.size(); j++) {
            int profit = prices[j] - prices[i];
            maxprofit = max(maxprofit,profit);
        }
    }
    return maxprofit;
}

// OPTIMISED APPROACH

int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    int minbuy = prices[0];
    for(int i = 1; i<prices.size(); i++) {
        if(prices[i]<minbuy) {
            minbuy = min(prices[i],minbuy);
        } else {
            int profit = prices[i]-minbuy;
            maxprofit = max(profit,maxprofit);
        }
    }
    return maxprofit;
}
int main () {
    cout<<"Enter the Length of vector: ";
    int n;
    cin>>n;
    vector<int> nums (n);
    cout<<"Enter the elements of the vector: ";
    for(int i = 0; i<n; i++) {
        cin>>nums[i];
    }
    cout<<"The maximum available profit is: "<<maxProfit(nums);
}
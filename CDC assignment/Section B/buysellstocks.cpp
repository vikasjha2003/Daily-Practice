#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int maxprofit = 0; // Initialize the maximum profit to 0
    int minbuy = prices[0]; // Assume the first price as the minimum buying price    
    for(int i = 1; i < prices.size(); i++) { // Loop through the prices starting from the second day
        if(prices[i] < minbuy) {// If the current price is less than the recorded minimum,
            minbuy = min(prices[i], minbuy); // update the minimum buying price
        } else {
            int profit = prices[i] - minbuy; // Otherwise, calculate the profit if sold today
            maxprofit = max(profit, maxprofit); // Update the maximum profit if this profit is greater
        }
    }
    return maxprofit; // Return the maximum profit found
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

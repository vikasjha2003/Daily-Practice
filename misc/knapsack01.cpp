#include<iostream>
#include<vector>
using namespace std;
int helper(int W, vector<int> &val, vector<int> &wt, int idx) {
    if(idx==val.size() || W==0) return 0;
    int notake = helper(W,val,wt,idx+1);
    int take = 0;
    if(wt[idx]<=W) {
       take = val[idx] + helper(W-wt[idx],val,wt, idx+1);
    }
    return max(take,notake);
}
int knapsack(int W, vector<int> &val, vector<int> &wt) {
   return helper(W,val,wt,0);
}
int main () {
    vector<int> a = {10,40,30,50};
    vector<int> b = {5,4,2,3};
    int weight = 5;
    cout<<"The maximum obtainable value is : "<<knapsack(weight,a,b);
}
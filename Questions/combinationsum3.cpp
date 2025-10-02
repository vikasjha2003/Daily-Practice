#include<vector>
#include<iostream>
using namespace std;
void helper(int k, int n, vector<vector<int>> &v, vector<int> &nums,int i) {
    if(nums.size() == k && n == 0) {
        v.push_back(nums);
        return;
    }
    if(n<0 || i>9) return;
    nums.push_back(i);
    helper(k,n-i,v,nums,i+1);
    nums.pop_back();
    helper(k,n,v,nums,i+1);
}
vector<vector<int>> combinationSum3(int k, int n) {
    if(k > n) return {};
    vector<vector<int>> nums;
    vector<int> v;
    helper(k,n,nums,v,1);
    return nums;
}
int main () {
    int k, n;
    cout<<"Enter value of k and n ";
    cin>>k>>n;
    vector<vector<int>> v = combinationSum3(k,n); // print v.
}
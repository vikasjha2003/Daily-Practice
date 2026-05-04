#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
}
int main () {
    int n;
    cout<<"Enter the size of n: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of v: ";
    for(int i = 0; i<v.size(); i++) {
        cin>>v[i];
    }
    int k;
    cout<<"Enter the k: ";
    cin>>k;
    cout<<"The "<<k<<" largest element is "<<findKthLargest(v,k);
}
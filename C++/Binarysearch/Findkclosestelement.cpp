#include<iostream>
#include<vector>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
}
int main () {
    vector<int> nums = {1,1,2,3,4,5};
    cout<<"Enter the target: ";
    int x ;
    cin>>x;
    vector<int> v;
    v = findClosestElements(nums,4,x);
    for(int val:v) {
        cout<<val<<" ";
    }
}
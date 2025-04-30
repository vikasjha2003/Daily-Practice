#include<iostream>
#include<vector>
using namespace std;
int findNumbers(vector<int>& nums) {
    int even = 0;
    for(int i = 0; i<nums.size(); i++) {
        int count = 0;
        int n = nums[i];
        while(n>0) {
            n/=10;
            count++;
        }
        if(count%2==0) {
            even++;
        }
    }
    return even;
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of vector: ";
    vector<int> v (n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    cout<<findNumbers(v);
}
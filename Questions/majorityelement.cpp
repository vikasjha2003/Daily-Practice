//Leetcode #169
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority (vector<int> nums) {
    sort(nums.begin(), nums.end());
        int major = nums[0];
        if(nums.size()==1) return major;
        int amt = 0;
        int c = 0;
        int j = 0;
        for(int i = 0; i<nums.size(); i++) {
            while(j<nums.size()) {
                if(j==nums.size()-1) {
                    c++;
                    break;
                }
                if(nums[j]==nums[j+1]) {
                    c++;
                    j++;
                } else {
                    break;
                }
            }
            if(c>amt) {
                amt = c;
                major = nums[j];
                c = 0;
                j++;
            } else {
                c = 0;
                j++;
            }
        }
        return major;
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the vector: ";
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    cout<<"The majority element of the array is: "<<majority(v);    
}
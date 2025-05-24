#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &v) {
    int a = 0,b = 0;
    for(int i = 0; i<v.size(); i++) {
        if(a>=arr1.size()) {
            v[i] = arr2[b++];
        } else if(b>=arr2.size()) {
            v[i] = arr1[a++];
        } else if(arr1[a]>=arr2[b]) {
            v[i] = arr1[a++];
        } else {
            v[i] = arr2[b++];
        }
    }
}
void mergesortrev(vector<int> &nums) {
    if(nums.size()==1) return;
    int n = nums.size();
    vector<int> a (n/2);
    vector<int> b (n-n/2);
    for(int i = 0; i<n/2; i++) {
        a[i] = nums[i];
    }
    for(int i = 0; i<n-n/2; i++) {
        b[i] = nums[n/2+i];
    }
    mergesortrev(a);
    mergesortrev(b);
    merge(a,b,nums);
}
int main () {
    vector<int> v = {5,3,6,1,2};
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
    mergesortrev(v);
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
}
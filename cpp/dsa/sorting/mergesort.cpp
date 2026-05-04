#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void mergearr(vector<int> arr1, vector<int> arr2, vector<int> &v) {
    int a = 0,b = 0;
    for(int i = 0; i<v.size(); i++) {
        if(a>=arr1.size()) {
            v[i] = arr2[b++];
        } else if(b>=arr2.size()) {
            v[i] = arr1[a++];
        } else if(arr1[a]<=arr2[b]) {
            v[i] = arr1[a++];
        } else {
            v[i] = arr2[b++];
        }
    }
}
void mergesort (vector<int> & nums) {
    if (nums.size()==1) return;
    // spliting the vector into two
    vector<int> a (nums.size()/2);
    vector<int> b (nums.size()-nums.size()/2);
    for(int i = 0; i<nums.size()/2; i++) {
        a[i] = nums[i];
    }
    for(int i = 0; i<nums.size()-nums.size()/2; i++) {
        b[i] = nums[i+nums.size()/2];
    }
    // recursion
    mergesort(a);
    mergesort(b);
    // merge
    mergearr(a,b,nums);
}
int main () {
    vector<int> v = {1,100,70,4,50,3,10,85};
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
    mergesort(v);
    for(int val : v) {
        cout<<val<<" ";
    }cout<<endl;
}
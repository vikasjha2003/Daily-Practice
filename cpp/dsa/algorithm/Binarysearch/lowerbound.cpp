#include<iostream>
#include<vector>
using namespace std;
int lowerbound (vector<int> v, int target) {
    int st = 0, end = v.size()-1;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(target == v[mid]) {
            return v[mid-1];
        } else if (v[mid]<target){
            st = mid+1;
        } else {
            end = mid-1;
        }
    }
    return v[end]; // lower bound by default
}
int upperbound (vector<int> v, int target) {
    int st = 0, end = v.size()-1;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(target == v[mid]) {
            return v[mid+1];
        } else if (v[mid]<target){
            st = mid+1;
        } else {
            end = mid-1;
        }
    }
    return v[st]; // upper bound
}
int main () {
    vector<int> v = {1,2,4,5,9,15,18,21,24};
    int target = 9;
    cout<<"The lowerbound is "<<lowerbound(v,target);
    // cout<<upperbound(v,target);
}
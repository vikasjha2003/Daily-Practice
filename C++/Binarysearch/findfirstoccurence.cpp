#include<iostream>
#include<vector>
using namespace std;
// optimnisation done in leetcode submission
int first(vector<int> v , int t) {
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(v[mid]==t) {
            if(v[mid-1]!=t) {
                return mid;
            } else {
                hi = mid - 1;
            }
        } else if (v[mid]<t) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}
int last(vector<int> v, int t) {
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(v[mid]==t) {
            if(v[mid+1]!=t) {
                return mid;
            } else {
                lo = mid + 1;
            }
        } else if (v[mid]<t) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}
int main () {
    vector<int> v = {1,2,2,3,3,3,3,3,4,4,5,8,9,12};
    int target = 3;
    cout<<"the first occurence at idx : "<<first(v,target)<<endl;
    cout<<"the last occurence at idx : "<<last(v,target)<<endl;
}
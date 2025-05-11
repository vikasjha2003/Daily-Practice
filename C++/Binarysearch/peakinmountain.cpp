#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    // Since peak can't exist on end points
    int lo = 1;
    int hi = arr.size()-2;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]) {
            return mid;
        } else if (arr[mid+1]>arr[mid]) {
            lo = mid + 1;
        } else {
            hi = mid -1;
        }
    }
    return -1;
}
int main () {
vector<int> v = {0,10,5,2};
if(peakIndexInMountainArray(v) != -1) {
    cout<<"The peak is "<<peakIndexInMountainArray(v);
} else {
    cout<<"The peak does not exist.";
}
}
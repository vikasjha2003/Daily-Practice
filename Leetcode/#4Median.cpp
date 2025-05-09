#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    vector<int> nums (m+n);
    int i = m-1;
    int j = n-1;
    for(int k = m+n-1; k>=0; k--) {
        if(i<0) {
            nums[k] = nums2[j];
            j--;
        } 
        else if (j<0) {
            nums[k] = nums1[i];
            i--;
        }
        else if (nums1[i]>nums2[j]) {
            nums[k] = nums1[i];
            i--;
        }
        else {
            nums[k] = nums2[j];
            j--;
        }
    }
    if((m+n)%2!=0) {
        return (float(nums[(m+n)/2]));
    } else {
        return (float(nums[(m+n)/2] + nums[((m+n)/2)-1])/2);
    }
}
int main () {
    int m, n;
    double sum, median;
    cout<<"Enter the size of array 1: ";
    cin>>m;
    vector<int> nums1 (m);
    cout<<"Enter the elements of array 1: ";
    for(int i = 0; i <m; i++) {
        cin>>nums1[i];
    }
    cout<<"Enter the size of array 2: ";
    cin>>n;
    vector<int> nums2 (n);
    cout<<"Enter the elements of array 2: ";
    for(int i = 0; i <n; i++) {
        cin>>nums2[i];
    }
    cout<<"The median of the arrays is : "<<median;
    return 0;
    cout<<findMedianSortedArrays(nums1,nums2);
}
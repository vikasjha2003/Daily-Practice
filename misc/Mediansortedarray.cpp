// Leetcode #4
#include<iostream>
#include<vector>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter the size of first vector: ";
    cin>>m;
    vector<int> nums1(m);
    cout<<"Enter the elements of first vector: ";
    for(int i = 0; i<m; i++) {
        cin>>nums1[i];
    }
    cout<<"Enter the size of second vector: ";
    cin>>n;
    vector<int> nums2(n);
    cout<<"Enter the elements of second vector: ";
    for(int i = 0; i<n; i++) {
        cin>>nums2[i];
    }
    // merging the two sorted array
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
    // printing the merged array
    for(int i = 0; i<m+n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl; 
    // calculating the median
    if((m+n)%2!=0) {
        cout<<"Median is: "<<nums[(m+n)/2];
    } else {
        cout<<"Median is: "<<float(nums[(m+n)/2] + nums[((m+n)/2)-1])/2;
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cout<<"Enter length of array 1 : ";
    cin>>n;
    int nums[n];
    cout<<"Enter array 1: ";
    for(int i=0; i<n; i++) {
        cin>>nums[i];
    }
    for(int i=0; i<n; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
    int m;
    cout<<"Enter the length of array 2 : ";
    cin>>m;
    int nums2[m];
    cout<<"Enter array 2: ";
    for(int i=0; i<m; i++) {
        cin>>nums2[i];
    }
    for(int i=0; i<m; i++) {
        cout<<nums2[i]<<" ";
    } cout<<endl;

    // merged sorted array

    int c1 = 0;
    int c2 = 0;
    int nums3[m+n];
    for(int i = 0; i<m+n; i++) {
        // if c1 or c2 excced size of that array
        if (c1==n) {
            nums3[i]=nums2[c2];
            c2++;
        } else if (c2==m) {
            nums3[i]=nums[c1];
            c1++;
        }
        else if(nums[c1]<=nums2[c2]) {
            nums3[i]=nums[c1];
            c1++;
        } else {
            nums3[i]=nums2[c2];
            c2++;
        }
    }
    cout<<"The merged array is: ";
    for(int i=0; i<m+n; i++) {
        cout<<nums3[i]<<" ";
    } cout<<endl;
}
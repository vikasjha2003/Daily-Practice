#include<iostream>
#include<vector>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter size of array 1 : ";
    cin>>m;
    cout<<"Enter size of array 2 : ";
    cin>>n;
    // capacity of array 1 = m+n;
    int nums1[m+n], nums2[n];
    cout<<"Enter elements of array 1: ";
    for(int i = 0; i<m; i++) {
        cin>>nums1[i];
    } cout<<endl;
    cout<<"Enter elements of array 2: ";
    for(int i = 0; i<n; i++) {
        cin>>nums2[i];
    } cout<<endl;
    cout<<"Array 1 : ";
    for(int i = 0; i<m; i++) {
        cout<<nums1[i]<<" ";
    } cout<<endl;
    cout<<"Array 2 : ";
    for(int i = 0; i<n; i++) {
        cout<<nums2[i]<<" ";
    } cout<<endl;
    int c1=m-1;
    int c2=n-1;
    for (int i = m+n-1; i>=0; i--) {
        if (c1<0) {
            nums1[i] = nums2[c2];
            c2--;
        } else if (c2<0) {
            nums1[i] = nums1[c1];
            c1--;
        } else if (nums1[c1]>=nums2[c2]) {
            nums1[i] = nums1[c1];
            c1--;
        } else {
            nums1[i] = nums2[c2];
            c2--;
        }
    }
    cout<<"New array 1 : ";
    for(int i = 0; i<m+n; i++) {
        cout<<nums1[i]<<" ";
    } cout<<endl;
}
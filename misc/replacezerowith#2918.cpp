#include<iostream>
#include<vector>
using namespace std;
long long minSum(vector<int>& nums1, vector<int>& nums2) {
    int i1 = -1, i2 = -1;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i<max(nums1.size(),nums2.size()); i++) {
        if(i<nums1.size()) {
            sum1 += nums1[i];
            if(nums1[i]==0) {
                nums1[i] = 1;
                i1 = i;
                sum1 += nums1[i];
            }
        }
        if(i<nums2.size()) {
            sum2 += nums2[i];
            if(nums2[i]==0) {
                nums2[i] = 1;
                i2 = i;
                sum2 += nums2[i];
            }
        }
    }
    if(sum1 == sum2) {
        return sum1;
    }else if (sum1 >sum2) {
        if(i2==-1) return -1;
        sum2 -= sum1;
        nums2[i2] = -sum2;
        return sum1;
    } else if (sum1<sum2) {
        if(i1==-1) return -1;
        sum1 -= sum2;
        nums1[i1] = -sum1;
        return sum2;
    }
    return -1;
}
int main () {
    vector<int> nums1 = {2,0,2,0};
    vector<int> nums2 = {1,4};
    int n = minSum(nums1,nums2);
    if(n == -1) {
        cout<<"Minimum equal sum not obtainable.";
    } else {
        cout<<"Minimum equal sum is "<<n;
    }
}
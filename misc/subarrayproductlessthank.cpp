#include<iostream>
#include<vector>
using namespace std;
// int numSubarrayProductLessThanK(vector<int>& nums, int k) { // storage issue since product can go too high to store.
//     for(int i = 1; i<nums.size(); i++) {
//         nums[i] = nums[i] * nums[i-1];
//     }
//     int left = 0;
//     int right = 0;
//     int res = 0;
//     int prev = 1;
//     while(left <= right) {
//         if(right == nums.size()) {
//             res += right - left;
//             left++;
//         } else if (nums[right]/prev < k) { // we are not using nums[i-1] since then we will have to handle extra case for when left = 0; using prev makes it slightly easy to handle.
//             right++;
//         } else {
//             res += right - left;
//             prev = nums[left]; 
//             left++;
//         }
//     } 
//     return res;
// }
int numSubarrayProductLessThanK(vector<int>& nums, int k) { // prefix sum but storing in int instead of vector.
    if(k <= 1) return 0;
    int res = 0;
    int prod = 1;
    int left = 0;
    for(int right = 0; right<nums.size(); right++) {
        prod *= nums[right];
        while(prod>=k) {
            prod /= nums[left];
            left++;
        }
        res += right - left +1;
    } 
    return res;
}
int main () {
    vector<int> v = {10,5,2,6};
    int k = 100;
    cout<<numSubarrayProductLessThanK(v,k);
}
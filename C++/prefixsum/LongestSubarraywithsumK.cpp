#include<iostream> 
#include<vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE

// int longestSubarray(vector<int>& arr, int k) {
//     int maxlen = 0;
//     for(int i = 0; i<arr.size(); i++) {
//         long long sum = 0;
//         for(int j = i; j<arr.size(); j++) {
//             sum += arr[j];
//             if(sum == k) maxlen = max(maxlen,j - i +1);
//         }
//     }
//     return maxlen;
// }

int longestSubarray(vector<int>& arr, int k) {
    unordered_map<long long, int> ps;
    long long sum = 0;
    int maxlen = 0;
    for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
        if(sum == k) maxlen = max(maxlen,i+1);
        long long rem = sum - k;
        if(ps.find(rem) != ps.end()) {
            int len = i - ps[rem];
            maxlen = max(maxlen,len);
        }
        if(ps.find(sum) == ps.end()) ps[sum] = i;
    }
    return maxlen;
}

// we can also write a worse version of the optimized hash map solution using binary search and prefix sum but this time we will store running sum in vector and search in range 0 to i. this will increase time complexity from O(n) - > O(nlogn) but space complexity will be reduced from O(n) -> O(1) since we can store running sum directly into the vector.

int main () {
    vector<int> nums = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout<<longestSubarray(nums,k);
}
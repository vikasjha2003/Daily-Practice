#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//     sort(nums.begin(), nums.end());
//     for(int i = 1; i<nums.size(); i++) {
//         nums[i] += nums[i-1]; 
//     }
//     for(int i = 0; i<queries.size(); i++) {
//         for(int j = 0; j<nums.size(); j++) {
//             if(nums[j]>queries[i]) {
//                 queries[i] = j;
//                 break;
//             } else if(j==nums.size()-1) {
//                 queries[i] = nums.size();
//             }
//         }
//     }
//     return queries;
// }

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    for(int i = 1; i<nums.size(); i++) {
        nums[i] += nums[i-1]; 
    }
    for(int i = 0; i<queries.size(); i++) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo<=hi) {
            int mid = lo + (hi - lo)/2;
            if(nums[mid]<=queries[i]) {
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        queries[i] = lo;
    }
    return queries;
}

int main () {
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};
    vector<int> v = answerQueries(nums,queries);
    for(int i : v) {
        cout<<i<<" ";
    }cout<<endl;
}
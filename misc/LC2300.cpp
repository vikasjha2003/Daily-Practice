#include<bits/stdc++.h>
using namespace std;
// vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) { // won't work for large testcases due to collisons
//     vector<int> ans(spells.size());
//     unordered_map<int,int> mpp; 
//     for(int i = 0; i<spells.size(); i++) {
//         mpp[spells[i]] = i;
//     }
//     sort(potions.begin(),potions.end());
//     sort(spells.begin(),spells.end());
//     int n = potions.size();
//     int i = 0;
//     int j = n-1;
//     while(i<spells.size()) {
//         if(j == -1 || (long)spells[i]*potions[j]< success) { 
//             ans[mpp[spells[i]]] = n-j-1;
//             i++;
//         } else {
//             j--;
//         }
//     }
//     return ans;
// }
// vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) { // working two pointer approach
//     vector<int> ans(spells.size());
//     vector<pair<int,int>> spellindi;
//     for(int i = 0; i<spells.size(); i++) {
//         spellindi.push_back({spells[i],i});
//     }
//     sort(potions.begin(),potions.end());
//     sort(spellindi.begin(),spellindi.end());
//     int n = potions.size();
//     int i = 0;
//     int j = n-1;
//     while(i<spells.size()) {
//         if(j == -1 || (long)spellindi[i].first * potions[j]< success) { 
//             ans[spellindi[i].second] = n-j-1;
//             i++;
//         } else {
//             j--;
//         }
//     }
//     return ans;
// }
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) { // binary search
    sort(potions.begin(),potions.end());
    vector<int> ans ;
    int n = potions.size();
    for(int i = 0; i<spells.size(); i++) {
        int lo = 0;
        int hi = n; // shifted to n to fix the condition where 0 successful pairs occur.
        while(lo<hi) {
            int mid = lo+(hi-lo)/2;
            if((long)spells[i] * potions[mid] >= success) hi = mid;
            else lo = mid+1;
        }
        ans.push_back(n-hi);
    }
    return ans;
}
// vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) { // brute force
//     sort(potions.begin(),potions.end());
//     vector<int> ans ;
//     int n = potions.size();
//     for(int i = 0; i<spells.size(); i++) {
//         int suc = 0;
//         for(int j = 0; j<n; j++) {
//             if((long)spells[i] * potions[j] >= success) {
//                 suc = n-j;
//                 break;
//             }
//         }
//         ans.push_back(suc);
//     }
//     return ans;
// }
int main () {
    vector<int> arr = {5,1,3};
    vector<int> nums = {1,2,3,4,5};
    int target = 7;
    vector<int> res = successfulPairs(arr,nums,target);
    for(int q : res) {
        cout<<q<<" ";
    }
}
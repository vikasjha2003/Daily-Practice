#include<bits/stdc++.h>
using namespace std;
// int findSmallestInteger(vector<int>& nums, int value) { // works fine but will give TLE for large input      because in worst case check will keep on adding value lets say if there are a lot of 0.
//     unordered_set<int> st;
//     int check = ((nums[0]%value)+value)%value;
//     int i = 0;
//     while(i<nums.size()) {
//         if(st.find(check) == st.end()) { 
//             st.insert(check);
//             i++; 
//         } else {
//             check = check + value;
//             continue;
//         }
//         if(i<nums.size()) check = ((nums[i] % value) + value) % value;
//     }

//     for(int i = 0; i<nums.size(); i++) {
//         if(st.find(i) == st.end()) return i;
//     }
//     return nums.size();
// }
int findSmallestInteger(vector<int>& nums, int value) {
    unordered_map<int,int> freq;
    for(int i = 0; i<nums.size(); i++) {
        int a = ((nums[i]%value)+value)%value;
        freq[a]++;
    }
    int i = 0;
    while(i<nums.size()) {
        int a = i%value;
        if(freq[a]>0) {
            i++;
            freq[a]--;
        } else break;
    }
    return i;
}
int main () {
    vector<int> nums = {0,-3};
    int value = 4;
    cout<<findSmallestInteger(nums,value);
}
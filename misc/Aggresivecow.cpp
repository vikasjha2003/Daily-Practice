#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
bool check (vector<int> &stalls , int k, int dist) {
    int count = 1; // cow already placed at min
    int idx = stalls[0]; // to keep track of last cows stall
    for(int i = 1; i<stalls.size(); i++) {
        if(stalls[i] - idx >= dist) {
            count++;
            idx = stalls[i];
        }
    }
    if(count >= k) return true;
    else return false;
}
int aggressiveCows(vector<int>& stalls, int k) { // binary search
    if(k > stalls.size()) return -1;
    sort(stalls.begin(),stalls.end());
    int hi = stalls[stalls.size()-1] - stalls[0]; // max - min
    int lo = 1;
    while(lo<=hi) {
        long mid = lo + (hi-lo)/2;
        if(check(stalls,k,mid)) lo = mid+1;
        else hi = mid-1;
    }
    return hi;
}
// int aggressiveCows(vector<int>& stalls, int k) { // linear search / brute force
//     //  We can directly use check function to perform linear search but i wanted to implement it in this way.
//     if(k > stalls.size()) return -1;
//     sort(stalls.begin(),stalls.end());
//     int hi = stalls[stalls.size()-1] - stalls[0]; // max - min
//     if(k == 2) return hi;
//     else {
//         int lo = 1;
//         while(lo<=hi) {
//             if(check(stalls,k,lo)) lo++;
//             else return lo-1;
//         }
//     }
//     return -1;
// }
int main () {
    vector<int> v = {1,2,4,8,9};
    int cows = 2;
    cout<<aggressiveCows(v,cows)<<endl;
}
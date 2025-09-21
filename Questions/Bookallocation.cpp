#include<iostream> // same pattern for lc 410 and painter partition
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
bool check (vector<int> &arr, int pages, int k) {
    int count = 0;
    int sum = 0;
    for(int i = 0; i<arr.size(); i++) {
        sum+= arr[i];
        if(sum>pages) {
            count++;
            sum = arr[i];
        }
    }
    if(count+1 <= k) return true;
    else return false;    
}
int findpages(vector<int> &arr,int k) {
    if(arr.size()<k) return -1;
    int lo = *max_element(arr.begin(),arr.end());
    long long hi = accumulate(arr.begin(),arr.end(),0);
    while(lo<=hi) {
        long mid = lo + (hi-lo)/2;
        if(check(arr,mid,k)) hi = mid-1;
        else lo = mid+1;
    }
    return lo;
}
// int findpages(vector<int>&arr , int k) { // linear search, brute force
//     if(arr.size()<k) return -1;
//     int lo = *max_element(arr.begin(),arr.end()); // minimum possible maximum, think of the case when number of books is equal to number of students.
//     int hi = accumulate(arr.begin(), arr.end(),0); // maximum possible value of pages, think of the case when there is only 1 student
//     while(lo<=hi) {
//         if(check(arr,lo,k)) return lo;
//         else lo++;
//     }
//     return -1; // will never trigger
// }
int main () {
    vector<int> v = {25,46,28,49,24};
    int students = 4;
    cout<<findpages(v,students)<<endl;
}
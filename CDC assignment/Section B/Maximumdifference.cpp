#include<iostream>
#include<vector>
using namespace std;
int findMaxDiff(vector<int> &arr) { // brute force since i don't know stack implementation yet
    int maxdif = 0; // to store maximum absolute difference
    for(int i = 0; i<arr.size(); i++) {
        int left = 0; // to store left min
        int right = 0; // to store right min
        for(int j = i-1; j>=0; j--) { // finding left min
            if(arr[j]<arr[i]) {
                left = arr[j];
                break;
            }
        }
        for(int j = i+1; j<arr.size(); j++) { // finding right min
            if(arr[j]<arr[i]) {
                right = arr[j];
                break;
            }
        }
        maxdif = max(maxdif,abs(left-right)); // updating max dif with the highest maxdif of lmin and rmin
    }
    return maxdif; // returning the max absolute difference
}
int main () {
    vector<int> arr = {2, 4, 8, 7, 7, 9, 3};
    cout<<"The maximum absolute difference between left min and right min is : "<<findMaxDiff(arr);
}
#include<iostream>
#include<vector>
using namespace std;

// BINARY SEARCH
// works for both LC 74 and 240
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = 0; 
    int j = matrix[0].size()-1;
    while(i<matrix.size() && j>=0) {
        if(matrix[i][j]==target) {
            return true;
        } else if(matrix[i][j]<target) {
            i++;
        } else {
            j--;
        }
    }
    return false;
}

int main () {
    // int n,m;
    // cout<<"Enter row : ";
    // cin>>n;
    // cout<<"Enter column : ";
    // cin>>m;
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // cout<<"Enter elements of array : ";
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cout<<arr[i][j]<<" ";
    //     } cout<<endl;
    // }
    int val ;
    cout<<"Enter the value to look for: ";
    cin>>val;
    // for(int i = 0; i<arr.size(); i++) {
    //     for(int j = 0; j<arr[0].size(); j++) {
    //         if(arr[i][j]==val) {
    //             cout<<" Value at idx : ("<<i<<","<<j<<")";
    //             break;
    //         }
    //     }
    // }
    cout<<searchMatrix(arr,val);
}
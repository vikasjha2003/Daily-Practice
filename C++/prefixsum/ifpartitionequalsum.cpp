#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,45};
    for(int i = 1; i<arr.size(); i++) {
        arr[i] = arr[i] + arr[i-1];
    }
    for(int i = 0; i<arr.size()-1; i++) {
        if(arr[i]*2==arr[arr.size()-1]) {
            cout<<"yes it can be partitioned using "<<arr[i];
            break;
        }
    }
}
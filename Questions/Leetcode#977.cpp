#include<iostream>
#include<vector>
using namespace std;
// SQUARES OF SORTED ARRAY
vector<int> sortedSquares(vector<int>& nums) {
    int i = 0, j = nums.size() - 1;
    vector<int> v (nums.size());
    for(int k = nums.size()-1; k>=0; k--) {
        if(abs(nums[i])>=abs(nums[j])) {
            v[k] = nums[i]*nums[i];
            i++;
        } else {
            v[k] = nums[j]*nums[j];
            j--;
        }
    }
    return v;
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of vector: ";
    vector<int> v (n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    sortedSquares(v);
}
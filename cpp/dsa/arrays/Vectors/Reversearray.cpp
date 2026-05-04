#include<iostream>
#include<vector>
using namespace std;
int main () {
    int l;
    cout<<"Enter the length of array: ";
    cin>>l;
    cout<<"Enter the array: "<<endl;
    vector<int> nums(l);
    for(int i=0; i<l; i++) {
        cin>>nums[i];
    }
    vector<int>rev(l);
    // int j = l-1;   This is coreect too
    for(int i = 0; i<l; i++) {
        int j = l-1-i;                      // i+j = l-1
        rev[i] = nums[j];
        j--;
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
    for(int i = 0; i<l; i++) {
        cout<<rev[i]<<" ";
    } cout<<endl;
}
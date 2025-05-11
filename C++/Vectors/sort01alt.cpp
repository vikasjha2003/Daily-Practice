#include<iostream>
#include<vector>
using namespace std;
// Two pointer approach
int main () {
    int l;
    cout<<"Enter the length of array: ";
    cin>>l;
    cout<<"Enter the array: "<<endl;
    vector<int> nums(l);
    for(int i=0; i<l; i++) {
        cin>>nums[i];
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
    int i = 0;
    int j = l-1;
    int temp = 0;
    while(i<j) {
        if (nums[i]==0) i++;
        else if (nums[j]==1) j--;
        else {
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
            j--;
        }
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
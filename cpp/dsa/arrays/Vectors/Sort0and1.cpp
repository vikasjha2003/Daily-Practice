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
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
    int zero = 0;
    int one = 0;
    for(int i = 0; i<l; i++) {
        if (nums[i]==1) {
            one++;
        } else {
            zero++;
        }
    }
    for(int i = 0; i<l; i++) {
        if (i<zero) {
            nums[i]=0;
        } else{
            nums[i]=1;
        }
    }
    for(int i = 0; i<l; i++) {
        cout<<nums[i]<<" ";
    } cout<<endl;
}
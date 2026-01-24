#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextperm (vector<int> &num, int n){
    int id = -1;
    int j ;
    for(int i = n-2; i>=0; i--) {
        if (num[i]<num[i+1]) {
            id = i;
            break;
        }
    }
    if(id==-1) {
        reverse(num.begin(),num.end());
    } else {
        reverse(num.begin()+(id+1),num.end());
    }
    for(int i = id+1; i<n; i++) {
        if(num[i]>num[id]) {
            j = i;
        }
    }
    int temp = num[id];
    num[id] = num[j];
    num[j] = temp;
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the array: ";
    for(int i = 0; i<n; i++) {
        cin>>nums[i];
    }
    for(int i = 0; i<n; i++) {
        cout<<nums[i]<<" ";
    }cout<<endl;
    nextperm(nums,n);
    for(int i = 0; i<n; i++) {
        cout<<nums[i]<<" ";
    }cout<<endl;
}
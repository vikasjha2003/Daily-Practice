#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &nums,int st,int en) {
    int mid = (st+en)/2;
    int pivotelement = nums[mid];
    int count = 0;
    for(int i = st; i<=en; i++) {
        if(i == mid) continue;
        if(nums[i]<pivotelement) count++;
    }
    int pivotidx = st + count;
    swap(nums[pivotidx],nums[mid]);
    int i = st;
    int j = en;
    while(i<pivotidx) {
        if(nums[i]<=pivotelement) i++;
        else if(nums[j]>pivotelement) j--;
        else if(nums[i]>pivotelement) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int kelement (vector<int> &nums,int st,int en,int k) {
    if(st==en) return nums[st];
    int pivot = partition(nums,st,en);
    if(pivot==k-1) return nums[pivot];
    else if(pivot<k-1) return kelement(nums,pivot+1,en,k);
    else return kelement(nums,st,pivot-1,k);
}
int main () {
    int k = 4; // 7
    vector<int> v = {1,6,10,7,8,4};
    for(int val : v) {
        cout<<val<<" ";
    } cout<<endl;
    int value = kelement(v,0,(v.size()-1),k);
    cout<<"The "<<k<<" smallest element is "<<value<<endl;
    for(int val : v) {
        cout<<val<<" ";
    } cout<<endl;
}
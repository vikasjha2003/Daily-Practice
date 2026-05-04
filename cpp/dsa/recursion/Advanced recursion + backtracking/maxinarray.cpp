#include<iostream>
#include<vector>
using namespace std;
void getarr (vector<int> &v, int n, int idx) {
    if(idx==0) {
        cout<<"Enter the elements of array: ";
    } else if(idx==n) return;
    cin>>v[idx]; 
    getarr(v,n,idx+1);
}
// void maxinarr(vector<int> &v, int n, int idx, int maxi) {
//     if(idx==n) {
//         cout<<maxi;
//         return;
//     }
//     maxi = max(maxi,v[idx]);
//     maxinarr(v,n,idx+1,maxi);
// }

// without passing max element

int maxarr(vector<int>&v,int n, int idx) {
    if (idx==n-1) return 0;
    return max(v[idx],maxarr(v,n,idx+1));
}
int main () {
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    vector <int> v(n);
    getarr(v,n,0);
    // maxinarr(v,n,0,INT_MIN);
    cout<<maxarr(v,n,0);
}

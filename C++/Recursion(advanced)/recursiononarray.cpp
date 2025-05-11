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
void printarr (vector<int> v, int n, int idx) {
    if(idx==n) return;
    else {
        cout<<v[idx]<<"\t";
        printarr(v,n,idx+1);
    }
}
int main () {
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    vector <int> v(n);
    getarr(v,n,0);
    printarr(v,n,0);
}

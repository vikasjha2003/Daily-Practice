#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(vector<int> &arr, int n , int i) {
    if(n<i) return;
    swap(arr[i],arr[n]);
    reverse(arr,--n,++i);
}
void print(int n) {
    if(n==0) return;
    cout<<n<<" "; // reverse order
    print(n-1);
    // cout<<n<<" "; // normal order
}
int main () {
    vector<int> v = {1,2,3,4,5,6,7};
    for(int q : v) {
        cout<<q<<" ";
    } 
    cout<<endl;
    print(v.size());
    // reverse(v,v.size()-1,0);
    // for(int q : v) {
    //     cout<<q<<" ";
    // } 
    // cout<<endl;
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(vector<int> &arr, int n , int i) {
    if(n<i) return;
    swap(arr[i],arr[n]);
    reverse(arr,--n,++i);
}
void reverse(vector<int> &arr, int i) {
    if(i>=arr.size()/2) return;
    swap(arr[i], arr[arr.size()-i-1]);
    reverse(arr,i+1);
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
     // print(v.size());
    reverse(v,0);
    for(int q : v) {
        cout<<q<<" ";
    } 
    cout<<endl;
}
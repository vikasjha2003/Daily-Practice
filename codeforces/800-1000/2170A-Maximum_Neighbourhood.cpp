#include<iostream>
using namespace std;
int main () {
    int arr[5] = {0,1,9,29,56}; 
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n < 5) cout<<arr[n]<<endl;
        else cout<<5 * (n*n - n - 1) << endl;
    }
}
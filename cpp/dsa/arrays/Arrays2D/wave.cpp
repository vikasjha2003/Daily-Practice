#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n,m;
    cout<<"Enter row : ";
    cin>>n;
    cout<<"Enter column : ";
    cin>>m;
    vector<vector<int>> arr(n, vector<int> (m));
    cout<<"Enter elements of array : ";
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }
    for(int i = 0; i<n; i++) {
        int k = m-1;
        for(int j = 0; j<m; j++) {
            if(i%2 == 0) cout<<arr[i][j]<<" ";
            else {
                cout<<arr[i][k]<<" ";
                k--;
            }
        }
    }
}
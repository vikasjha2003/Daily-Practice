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
    int maxr,maxc,minr,minc;
    maxr = n-1;
    maxc = m-1;
    minr = 0;
    minc = 0;
    int count = 0;
    int tne = m*n;
    while(minc<=maxc&&minr<=maxr) {
        //right
        for(int j = minc; j<=maxc&&count<tne; j++) {
            cout<<arr[minc][j]<<" ";
            count++;
        }
        minr++;
        //down
        for(int i = minr; i<=maxr&&count<tne; i++) {
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int j = maxc; j>=minc&&count<tne; j--) {
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //top
        for(int i = maxr; i>=minr&&count<tne; i--) {
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }    
}
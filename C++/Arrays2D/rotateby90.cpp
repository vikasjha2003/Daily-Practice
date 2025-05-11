#include<iostream>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter no. of rows : ";
    cin>>m;
    cout<<"Enter no. of columns : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix : ";
    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    // print the matrix 
    for(int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<<a[i][j]<<" ";
        } cout<<endl;
    }
    // rotate by 90 degree
    for(int i = 0; i<m; i++) {
        for(int j = i+1; j<n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i = 0; i<m; i++) {
        int k = 0;
        for (int j = n-1; j>=0; j--) {
            if(k<=j) {
                int temp = a[i][k];
                a[i][k] = a[i][j];
                a[i][j] = temp;
                k++;
            }
        } cout<<endl;
    }
    for(int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<<a[i][j]<<" ";
        } cout<<endl;
    }
}
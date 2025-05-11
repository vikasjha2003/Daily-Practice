#include<iostream>
using namespace std;
int main () { // 867, 48
    int m, n;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<"Enter the no. of columns: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the matrix : "<<endl;
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } cout<<endl;
    if(m!=n) {
        int b[n][m];
        for(int i = 0; i<n; i++) {
            for (int j = 0; j<m; j++) {
                b[i][j] = a[j][i];
            }
        }
        for(int i = 0; i<n; i++) {
            for (int j = 0; j<m; j++) {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        } cout<<endl;
    } else {
        for(int i = 0; i<m; i++) {
            for (int j =i+1; j<n; j++) {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        } 
        for(int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                cout<<a[i][j]<<" ";
            } cout<<endl;
        } cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter the rows: ";
    cin>>m;
    cout<<"Enter the columns: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<m; i++) {
        for(int j =0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<m; i++) {
        for(int j =0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;
    //largest no. 
    int max = INT_MIN;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j]>max) max = a[i][j];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
    //sum
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            sum += a[i][j];
        }
    }
    cout<<"The sum is : "<<sum<<endl;
    // Matrix addition
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] += a[i][j];
        }
    }
    for(int i = 0; i<m; i++) {
        for(int j =0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;
    // Transpose of Matrix
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
    // for(int j = 0; j<n; j++) {
    //     for(int i = 0; i<m; i++) {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }cout<<endl;
}
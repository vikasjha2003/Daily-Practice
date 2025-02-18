#include<iostream>
#include<vector>
using namespace std;
int main () {

    // // Q1. Write a program to print the elements of both the diagonals in a square matrix.
    // vector<vector<int>> v (5, vector<int> (5,10));
    // for(int i = 0; i<5; i++) {
    //     for(int j = 0; j<5; j++) {
    //         if(i==j) cout<<v[i][j];
    //         else if(i+j==4) cout<<v[i][j];   // i+j==n-1
    //         else cout<<"  ";
    //     } cout<<endl;
    // }

    // // Q2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
    // int n,m;
    // cout<<"Enter the value of n and m: ";
    // cin>>n>>m;
    // vector<vector<int>> v1(n, vector<int> (m));
    // cout<<"Enter the elements of the vector: "<<endl;
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cin>>v1[i][j];
    //     }
    // }
    // for(int i = 0; i<v1.size(); i++) { // reverse
    //     int k = v1[0].size()-1;
    //     for(int j = 0; j<v1[0].size()/2; j++) {
    //         int temp = v1[i][j];
    //         v1[i][j] = v1[i][k];
    //         v1[i][k] = temp;
    //         k--;
    //     }
    // }
    // for(int i = 0; i<v1.size(); i++) { // transpose
    //     for(int j = i+1; j<v1[i].size(); j++) {
    //         int temp = v1[i][j];
    //         v1[i][j] = v1[j][i];
    //         v1[j][i] = temp;
    //     }
    // }
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cout<<v1[i][j]<<" ";
    //     }cout<<endl;
    // }

    // // Q3. Write a program to print the matrix in wave form.
    // int n,m;
    // cout<<"Enter row : ";
    // cin>>n;
    // cout<<"Enter column : ";
    // cin>>m;
    // vector<vector<int>> arr(n, vector<int> (m));
    // cout<<"Enter elements of array : ";
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i = 0; i<n; i++) {
    //     for(int j = 0; j<m; j++) {
    //         cout<<arr[i][j]<<" ";
    //     } cout<<endl;
    // }
    // for(int i = 0; i<n; i++) {
    //     int k = 0;
    //     for(int j = m-1; j>=0; j--) {
    //         if (i%2==0) cout<<arr[j][i]<<" ";
    //         else {
    //             cout<<arr[k][i]<<" ";
    //             k++;
    //         }
    //     }
    // }

    // Q4. Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
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
            cout<<arr[i][maxr]<<" ";
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

    // // Q5. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.You must do it in place.
    // vector<vector<int>> v4 (3, vector<int> (3));
    // cout<<"Enter the matrix with zero at a position: ";
    // int idxr, idxc;
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++) {
    //         cin>>v4[i][j];
    //     }
    // }
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++) {
    //         if(v4[i][j]==0) {
    //             idxr = i;
    //             idxc = j;
    //             break;
    //         }
    //     }
    // }
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++) {
    //         if(i==idxr || j==idxc) {
    //             v4[i][j] = 0;
    //         }
    //     }
    // }
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++) {
    //         cout<<v4[i][j]<<" ";
    //     }cout<<endl;
    // }
}
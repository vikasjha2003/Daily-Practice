#include<iostream>
using namespace std;
// 2-D array also known as array of arrays
int main () {
    // Initialisation
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {{1,2,3},{7,8,9},{4,5,6}};
    int p[][3] = {1,2,3,4,5,6,7,8,9};
    // int p1[3][] = {1,2,3,4,5,6,7,8,9};  wrong
    // Traversal through 2D array
    for(int i = 0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            cout<<a[i][j];
        }
    }
    // Input in 2D array
    for(int i = 0; i <m; i++) {
        for (int j = 0; i<n; j++) {
            cin>>arr[i][j];
        }
    }
}
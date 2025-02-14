#include<iostream>
#include<vector>
using namespace std;
void middlecolumn (vector<vector<int>> v) {
    int m = v.size();
    int n = v[0].size();
    for(int i=0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (i==m/2 || j==n/2) {
                cout<<v[i][j];
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }
}
int main () {
    // Q1. Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
    vector<vector<int>> vtr (5,vector<int> (5,10));
    for(int i = 0; i<5; i++) {
        for(int j=0;j<5;j++) {
            cout<<vtr[i][j]<<" ";
        }cout<<endl;
    }
    // Q2. Write a program to add two matrices and save the result in one of the given matrices.
    for(int i = 0; i<vtr.size(); i++) {
        for(int j = 0; j<vtr.size(); j++) {
            vtr[i][j] += vtr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i<5; i++) {
        for(int j=0;j<5;j++) {
            cout<<vtr[i][j]<<" ";
        }cout<<endl;
    }
    // Q3. Write a C++ program to find the largest element of a given 2D array of integers.
    cout<<endl;
    vector<vector<int>> v1 = {{1,2,3},{5,6},{7,9,2}};
    int max = v1[0][0];
    for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++) {
            if (v1[i][j]>max) max = v1[i][j];
        }
    }
    cout<<max<<endl;
    // Q4. Write a program to print the row number having the maximum sum in a given matrix.
    cout<<endl;
    int row = 0, sum = 0, sum1 = 0;
    for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++) {
            sum+=v1[i][j];
        }
        if(sum>sum1) {
            sum1 = sum;
            row = i;
            sum = 0;
        } else {
            sum = 0;
        }
    }
    cout<<"The max sum is "<<sum1<<" of row "<<row<<endl;
    // Q5. Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
    cout<<endl;
    vector<vector<int>> v2 (5,vector<int> (5));
    for(int i = 0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>v2[i][j];
        }
    }
    middlecolumn(v2);

    // took 30 min
}
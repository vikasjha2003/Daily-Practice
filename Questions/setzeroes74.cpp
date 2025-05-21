#include<iostream>
#include<vector>
using namespace std;

// void setZeroes(vector<vector<int>>& matrix) {
//     vector<vector<int>> v = matrix;
//     for(int i = 0; i<v.size(); i++) {
//         for(int j = 0; j<v[i].size(); j++) {
//             if(v[i][j]==0) {
//                 for(int k = 0; k<max(v.size(),v[0].size()); k++) {
//                     if(k<v.size()) matrix[k][j] = 0;
//                     if(k<v[0].size()) matrix[i][k] = 0;
//                 }
//             }
//         }
//     }
// }

// trying to find something better than brute force
void setZeroes(vector<vector<int>>& matrix) {
    bool flag = false;
    for(int i = 0; i<matrix.size(); i++) {
        if(matrix[i][0]==0) flag = true;
        for(int j = 1; j<matrix[0].size(); j++) {
            if(matrix[i][j]==0) {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }   
    for(int i = matrix.size()-1; i>=0; i--) {
        for(int j = matrix[0].size()-1; j>=1; j--) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
        if(flag==true) {
            matrix[i][0] = 0;
        }
    }
}
int main () {
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
    for(auto i : matrix) {
        for( auto j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }    
}
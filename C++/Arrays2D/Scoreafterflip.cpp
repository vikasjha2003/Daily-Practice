#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid) {
    // making the first column 0
    for(int i = 0; i<grid.size(); i++) {
        if(grid[i][0]==0) {
            for(int j = 0; j<grid[i].size(); j++) {
                if(grid[i][j]==0) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = 0;
                }
            }
        }
    }
    // increasing the overall number of zeros
    for(int i = 1; i<grid[0].size(); i++) {
        int noz = 0, noo = 0;
        // counting number of zeroes and once
        for(int j = 0; j<grid.size(); j++) {
            if(grid[j][i]==0) noz++;
            else noo++;
        }
        // if number of zeroes > number of ones then flip
        if(noz>noo) {
            for(int j = 0; j<grid.size(); j++) {
                if(grid[j][i]==0) grid[j][i] = 1;
                else grid[j][i] = 0;
            }
        }
    }
    // calculating sum in decimal form
    int sum = 0;
    for(int i = 0; i<grid.size(); i++) {
        int x = 1;
        for(int j = grid[0].size()-1; j>=0; j--) {
            sum += grid[i][j] * x;
            x *= 2;
        }
    }
    return sum;
}
int main () {
    vector<vector<int>> nums = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    cout<<matrixScore(nums);
}
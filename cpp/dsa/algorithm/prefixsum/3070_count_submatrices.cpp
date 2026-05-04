#include<iostream>
#include<vector>
using namespace std;
int countSubmatrices(vector<vector<int>>& grid, int k) {
        int count = 0;
        for(int i = 0; i<grid.size(); i++) {
            int row_sum = 0;
            for(int j = 0; j<grid[0].size(); j++) {
                row_sum += grid[i][j];
                if(i > 0) grid[i][j] = grid[i-1][j] + row_sum;
                else grid[i][j] = row_sum;
                if (grid[i][j] <= k) count++;
                else break; // early termination
            }
        }
        return count;
    }
int main () {
    vector<vector<int>> grid = {{7,2,9},{1,5,0},{2,6,6}};
    int k = 20;
    cout<<countSubmatrices(grid,k);
}
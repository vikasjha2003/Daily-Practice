#include<iostream>
#include<vector>
#include<string>
using namespace std;
    bool canplace (vector<string> ans, int row, int col,int n) { // checking queen's safety

        for(int i = 0; i<n ; i++ ) { // same loop to check both vertical and horizontal
            // if(i!= col && ans[row][i] == 'Q') return false; // no need to check 
            if(i!= row && ans[i][col] == 'Q') return false;
        }
        for(int i = row, j = col;i>=0 && j>= 0 ;i--,j--) { // left diagonal check
            if((i!= row && j!= col) && ans[i][j] == 'Q') return false;
        }
        for(int i = row, j = col; i>=0 && j<n ;i--,j++) { // right diagonal check
            if((i!= row && j!= col) && ans[i][j] == 'Q') return false;
        }
        return true;        
    }
    void helper(vector<vector<string>> &store,vector<string> &ans, int row, int n) { // first step, placing queen
        if(row  == n) {
            store.push_back(ans);
            return;
        }
        for(int col = 0; col<n; col++) {
            if(canplace(ans,row,col,n)) {
                ans[row][col] = 'Q';
                helper(store,ans,row+1,n);
                ans[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> store;
        vector<string> board(n,string(n,'.'));
        helper(store,board,0,n);
        return store;
    }
int main () {
    int n = 4;
    vector<vector<string>> v = solveNQueens(n);
    for(auto q : v) {
        for(auto s : q) {
            cout<<s<<endl;
        }
        cout<<endl;
    }
}
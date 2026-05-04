#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<vector<int>> generateMatrix(n, vector<int> (n,0));
    // print in spiral form
    int tne = n*n;
    int count = 1;
    int minr,maxr,minc,maxc;
    minr=0;
    maxr=n-1;
    minc=0;
    maxc=n-1;
    while(minc<=maxc&&minr<=maxr) {
        //right
        for(int j = minc; j<=maxc&&count<=tne; j++) {
            generateMatrix[minc][j] = count;
            count++;
        }
        minr++;
        //down
        for(int i = minr; i<=maxr&&count<=tne; i++) {
            generateMatrix[i][maxc] = count;
            count++;
        }
        maxc--;
        //left
        for(int j = maxc; j>=minc&&count<=tne; j--) {
            generateMatrix[maxr][j] = count;
            count++;
        }
        maxr--;
        //top
        for(int i = maxr; i>=minr&&count<=tne; i--) {
            generateMatrix[i][minc] = count;
            count++;
        }
        minc++;
    }

    // print the matrix

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<generateMatrix[i][j]<<" ";
        }cout<<endl;
    }
}
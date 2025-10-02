#include<iostream>
#include<vector>
using namespace std;
int maximizeTheCuts(int n, int x, int y, int z) {
    if(n==0) return 0; // exact cut size
    if(n<0) return -1; // can't go further
    int a = maximizeTheCuts(n-x,x,y,z); // cuting x segment off
    int b = maximizeTheCuts(n-y,x,y,z); // cuting y segment off
    int c = maximizeTheCuts(n-z,x,y,z); // cuting z segment off
    return max(max(a,b),max(a,c))+1; // finding maximum of the 3 possible segments and returning. 
}
int main () {
    int n,x,y,z;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of x, y and z: ";
    cin>>x>>y>>z;
    cout<<"The max cut segments: "<<maximizeTheCuts(n,x,y,z);
}
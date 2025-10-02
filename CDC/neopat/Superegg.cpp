#include<iostream> // leetcode 887
#include<vector>
using namespace std;
int egg(int n, int k) { // too slow, will give TLE
    if(n == 0) return 0;
    if(n == 1) return 1;
    if (k==1) return n;
    int ans = INT_MAX;
    for(int i = 1; i<=n; i++) { // to simulate dropping from all floors
        // now egg will either break or it will not break, for assurance we will take worst case number of throws that is maximum of both case.
        int a = 1 + max(egg(i-1,k-1),egg(n-i,k));
        ans = min(a,ans);
    }
    return ans;
}
int main () {
    int n, k;
    cout<<"Enter the value of n and k "<<endl;
    cin>>n>>k;
    vector<int> dp(n,-1);
    cout<<"The minimum number of drop is: "<<egg(n,k);
}
#include<bits/stdc++.h>
using namespace std;
int main () {
    int f,e;
    cin>>f>>e;
    // f = number of floors
    // e = number of coconuts
    if(e == 1) {
        cout<<f;
        return 0;
    }
    int lo = 0;
    int hi = f-1;
    int count = 0; // to count iterations
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        hi = mid -1;
        count++; 
    }
    if(count > 31) cout<<"Impossible";
    else cout<<count+1;
}
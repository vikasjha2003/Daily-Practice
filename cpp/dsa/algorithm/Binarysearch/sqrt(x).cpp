#include<iostream>
using namespace std;
int maine () {
    int x ;
    cout<<"Enter the number: ";
    cin>>x;
    int lo = 0;
    int hi = x;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(mid*mid==x) {
            cout<<"sqrt = "<<mid;
            break;
        } else if(mid*mid>x) {
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    cout<<"sqrt = "<<hi;
}
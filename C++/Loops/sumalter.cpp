#include<iostream>
using namespace std;
int main () {
    int n, i, sum;
    cout<<"Enter the value of n : ";
    cin>>n;
    sum = 0;
    // for(i=1; i<=n; i++) {
    //     if(i%2==0) {
    //         sum-=i;
    //     } else {
    //         sum+=i;
    //     }
    // }
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n ;
    cout<<"The sum of the series is : "<<sum;
    return 0;
}
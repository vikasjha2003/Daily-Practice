#include<iostream>
using namespace std;
int main () {
    int n, i, j, m;
    cout<<"Please enter the value of n : ";
    cin>>n;
    m = (2*n)-1;
    for(i=m; i>=1; i--) {
        for(j=m; j>=1; j--) {
            int a = i;
            int b = j;
            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;
            int x = min(a,b);
            cout<<n-x+1;
        } cout<<endl; 
    } 
}

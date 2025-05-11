#include<iostream>
using namespace std;
int factorial (int n) {
    int facto = 1;
    for(int i =1; i<=n; i++) {
        facto *= i;
    }
    return facto;
}
int combination (int n, int r) {
    int comb = factorial(n)/(factorial(r)*factorial((n-r)));
    return comb;
}
void triangle (int n) {
    for(int i = 0; i<=n; i++) {
        // for(int j=n; j>i; j--) {
        //     cout<<" ";
        // }
        for(int j = 0; j<=i; j++) {
            cout<<combination(i,j)<<" ";
        } cout<<endl;
    }
}
int main () {
    int n, next, curr;
    cout<<"Enter the value of n: ";
    cin>>n;
    // triangle(n);

    // OPTIMISED APPROACH

    for(int i=0; i<=n; i++) {
        curr = 1;
        for(int j=0; j<=i; j++) {
            cout<<curr;
            next = curr*(i-j)/(j+1);
            curr = next;
        } cout<<endl;
    }
}
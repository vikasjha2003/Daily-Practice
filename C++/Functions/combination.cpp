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
int permutation (int n, int r) {
    int perm = factorial(n)/factorial((n-r));
    return perm;
}
int main () {
    int a,b;
    cout<<"Enter total sample: ";
    cin>>a;
    cout<<"Number of selection to be made: ";
    cin>>b;
    cout<<"Total no. of possible combinations = "<<combination(a,b)<<endl;
    cout<<"Number of ways to arrange: "<<permutation(a,b);
}
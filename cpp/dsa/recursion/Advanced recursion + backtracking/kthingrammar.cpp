#include<iostream>
using namespace std;
int kthGrammar(int n, int k) {
    if(n==1) return 0;
    if(k%2==1) return kthGrammar(n-1,(k/2)+1); // same
    else { // flip
        int ans = kthGrammar(n-1,k/2);
        if(ans==1) return 0;
        else return 1;
    }
}
int main () {
    int n = 4;
    int k = 3;
    cout<<kthGrammar(n,k);
}
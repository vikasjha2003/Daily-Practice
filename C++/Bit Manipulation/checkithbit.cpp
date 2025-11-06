#include<iostream> // not writing brute force method but they can also be easily implemented.
using namespace std;
int main () {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i = 1; // the bit we need to check (if set or not)

    // left shift method

    // if(n & (1<<i)) cout<<true;
    // else cout<<false;

    // right shift method

    if((n>>i) & 1) cout<<true;
    else cout<<false;
}
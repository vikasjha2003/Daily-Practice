#include<iostream>
using namespace std;
int main () {
    int i, j, n, a;
    cout<<"Please enter the value of n : ";
    cin>>n;
    // for(i=1; i<=n; i++) {
    //     a=1;
    //     for(j=1; j<=n; j++) {
    //         cout<<(char)(a+64)<<"\t";
    //         a++;
    //     } cout<<endl;
    // }
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            cout<<(char)(j+64)<<"\t";
        } cout<<endl;
    }
}
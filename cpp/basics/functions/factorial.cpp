#include<iostream>
using namespace std;
void prfact (int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
        cout<<fact<<"\t";
    }
}
int main () {
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    prfact(n);
}
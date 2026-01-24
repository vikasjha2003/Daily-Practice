#include<iostream>
using namespace std;
void firstlast(int n, int *f, int *l) {
    *l = n%10;
    while(n>0) {
        *f = n%10;
        n /= 10;
    }
}
int main () {
    int n, f, l;
    cout<<"Enter the number: ";
    cin>>n;
    firstlast(n, &f, &l);
    cout<<f<<"\t"<<l;
    return 0;
}
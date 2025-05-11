#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter total terms : ";
    cin>>n;
    int a;
    cout<<"Enter the first term : ";
    cin>>a;
    for(int i=1; i<=n; i++) {
        cout<<a<<"\t";
        a+=2;
    }
}


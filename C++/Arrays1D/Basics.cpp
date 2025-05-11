#include<iostream>
using namespace std;
int main () {
    int x [6];
    for(int i = 0; i<6; i++) {
        cout<<"Enter x["<<i<<"] = ";
        cin>>x[i];
    }
    for(int i = 0; i<6; i++) {
        cout<<x[i]<<"\t";
    }
}
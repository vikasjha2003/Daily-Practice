#include<iostream>
using namespace std;
int main () {
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++) {
        int x ,y;
        cin>>x>>y;
        if (y > x) cout<<2<<endl;
        else if(y==1 || x-1 <= y) cout<<-1<<endl;
        else cout<<3<<endl;
    }
}
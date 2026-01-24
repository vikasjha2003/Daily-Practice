#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v1(10,5);
    cout<<v1.size()<<" "<<v1.capacity()<<endl;
    for(int i = 0; i<v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    for(int i = 0; i<v1.size(); i++) {
        cin>>v1[i];
    }
    for(int i = 0; i<v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    for(int i = 0; i<10; i++) {
        int x;
        cin>>x;
        v1.push_back(x);
    }    
}
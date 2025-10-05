#include<iostream>
#include<string>
#include<vector>
using namespace std;

void parent(string st,int n,int no,int nc,vector<string> &v) {
    if(nc==n) {
        v.push_back(st);
        return; 
    }
    if(no<n) {
        parent(st+'(',n,no+1,nc,v);   
    }
    if(nc<no) {
        parent(st+')',n,no,nc+1,v);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> v;
    parent("",n,0,0,v);
    return v;
}

int main () {
    int n = 3;
    vector<string> v = generateParenthesis(n); 
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }
}
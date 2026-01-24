#include<iostream>
#include<vector>
using namespace std;
void change (vector<int> a) {
    a[3]=0;
    for(int i = 0; i < a.size(); i++) {
        cout<<a[i]<<" ";
    } cout<<endl;
}
// Unlike arrays vector does not pass by reference by default, it passes by reference hence we need to use pointer or Ampercant(&) operator.
void change1 (vector<int> &a) {
    a[3]=67;
}
int main () {
    vector<int> v;
    v.push_back(435);
    v.push_back(35);
    v.push_back(463);
    v.push_back(563);
    v.push_back(345);
    v.push_back(43);
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    change(v);
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    change1(v);
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    int *p = &v[0];
    for(int i = 0; i<v.size(); i++) {
        cout<<*p<<" ";
        p++;
    } cout<<endl; 
}
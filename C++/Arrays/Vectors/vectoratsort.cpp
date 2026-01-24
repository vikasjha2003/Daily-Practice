#include<iostream>
#include<vector>
#include<algorithm> //sort is part of this header
using namespace std;
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
    sort(v.begin(),v.end());
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    v.at(3) = 59;
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
}
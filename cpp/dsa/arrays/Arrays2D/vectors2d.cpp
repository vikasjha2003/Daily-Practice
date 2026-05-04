#include<iostream>
#include<vector>
using namespace std;
int main () {
    // vector<vector<int>> v;
    // vector<int> v1;
    // vector<int> v2;
    // vector<int> v3;
    // v1.push_back(3);
    // v2.push_back(3);
    // v2.push_back(3);
    // v2.push_back(3);
    // v2.push_back(3);
    // v3.push_back(3);
    // v3.push_back(3);
    // v3.push_back(3);
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // cout<<v[0][0];
    vector<vector<int>> v(3,vector<int> (4,2));
    cout<<v[0][1];
}
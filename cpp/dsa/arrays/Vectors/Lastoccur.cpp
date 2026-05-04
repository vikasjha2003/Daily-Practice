#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v;
    v.push_back(74);
    v.push_back(23);
    v.push_back(85);
    v.push_back(12);
    v.push_back(68);
    v.push_back(74);
    v.push_back(63);
    v.push_back(54);
    v.push_back(69);
    v.push_back(10);
    int search = 69;
    for(int i = (v.size()-1); i>=0; i--) {
        if(v[i]==search) {
            cout<<"Item last occurs at index: "<<i;
            break;
        }
    }
}
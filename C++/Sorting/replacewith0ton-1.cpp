#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    vector<int> v = {12,8,16,9,1};
    vector<int> a = v; // {1,8,9,12,16}
    sort(a.begin(), a.end());
    for(int i = 0 ; i<a.size(); i++) {
        for(int j = 0; j<v.size(); j++) {
            if(v[j]==a[i]) {
                v[j] = i;
                break;
            }
        }
    }
    for(int val : v) {
        cout<<val<<" ";
    }
}
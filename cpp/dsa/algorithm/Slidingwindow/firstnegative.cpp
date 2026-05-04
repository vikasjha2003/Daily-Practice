#include<iostream>
#include<vector>
using namespace std;
vector<int> firstNegIntB(vector<int>& arr, int k) { // brute force
    vector<int> v;
    for(int i = 0; i<arr.size()-k+1; i++) {
        for(int j = i; j<i+k; j++) {
            if(arr[j]<0) {
                v.push_back(arr[j]);
                break;
            } else if(j==i+k-1) v.push_back(0);
        }    
    }
    return v;
}
vector<int> firstNegInt(vector<int>& arr, int k) { // TLE on gfg
    vector<int> v;
    int idx = -1;
    for(int i = 0; i<k; i++) {
        if(arr[i]<0) {
            idx = i;
            v.push_back(arr[i]);
            break;
        }
        if (i==k-1) v.push_back(0);
    }
    int end = 0;
    for(int i = k; i<arr.size(); i++) {
        if(idx>end) {
            v.push_back(arr[idx]);
        } else {
            for(int j = end+1; j<= i; j++) {
                if(arr[j]<0) {
                    idx = j;
                    v.push_back(arr[j]);
                    break;
                }
                if (j == i) v.push_back(0);
            }
        }
        end++;
    }
    return v;
}
int main () {
    vector<int> v = {12, -1, -7, 8, -15, 30, 16, 28};
    vector<int> c = firstNegInt(v,3);
    for(int q : c) {
        cout<<q<<" ";
    } cout<<endl;
}
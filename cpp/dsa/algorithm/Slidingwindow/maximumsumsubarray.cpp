#include<iostream>
#include<vector>
using namespace std;
void maxsum (vector<int> v, int k) {
    int maxi = INT_MIN;
    int maxidx = -1;
    for(int i = 0; i<v.size()-k+1; i++) { // brute force
        int sum = 0;
        for(int j = i; j<i+k; j++) {
            sum += v[j];
        }
        if (maxi<=sum) {
            maxi = sum;
            maxidx = i;
        }
    }
    cout<<maxi<<endl;
    cout<<maxidx<<endl;
}

void maxsumo (vector<int> v , int k) {
    int sum = 0;
    int idx = 0;
    for(int i = 0; i<k; i++) { // creating window
        sum += v[i];
    }
    int prev = sum;
    for(int i = k; i<v.size(); i++) { // sliding window
        prev = prev + v[i] - v[i-k];
        if(prev>sum) {
            sum = prev;
            idx = i-k+1;
        }
    }
    cout<<sum<<endl;
    cout<<idx<<endl;
}

int main () {
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    maxsum(v,k);
    maxsumo(v,k);
}
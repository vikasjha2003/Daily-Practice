#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i<7; i++) {
            int a;
            cin>>a;
            pq.push(a);
        }
        int res = 0;
        while(pq.size() > 1) {
            res -= pq.top();
            pq.pop();
        }
        res += pq.top();
        cout<<res<<endl;        
    }
}
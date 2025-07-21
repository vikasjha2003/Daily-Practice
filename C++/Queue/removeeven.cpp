#include<iostream>
#include<queue>
using namespace std;
int main () {
    queue<int> q;
    for(int i = 0; i<6; i++) {
        q.push(i);
    }
    int n = q.size();
    for(int i = 0; i<n; i++) {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    } cout<<endl;
    
    n = q.size();
    for(int i = 0; i<n; i++) {
        if(i%2==0) q.pop();
        else {
            q.push(q.front());
            q.pop();
        }
    }
    
    n = q.size();
    for(int i = 0; i<n; i++) {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    } cout<<endl;
}
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main () {
    queue<int> q;
    stack<int> st;
    for(int i = 0; i<6; i++) {
        q.push(i);
    }
    while(q.size()>0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i = 0; i<n; i++) { // q has been reversed
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

}
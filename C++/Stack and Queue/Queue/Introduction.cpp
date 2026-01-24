#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main () {
    queue<int> q;
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
 // rest is similar to stack
    // printing a queue
    int n = q.size();
    for(int ib = 0; ib<n; ib++) {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    } cout<<endl;
    while(q.size()>0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) { // while we are displaying in reverse but the queue is also getting reversed. to revert it to original we need to repeat entire process again or use one more stack.
        q.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    } cout<<endl;
}
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> q) {
    while(q.size()!=0) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void reverse(queue<int> &q) {
    stack<int> st;
    while(q.size()!=0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0) {
        q.push(st.top());
        st.pop();
    }
}
void reverse(queue<int> &q, int k) {
    stack<int> st;
    int n = q.size();
    k = k%n;
    for(int i = 0; i<k; i++) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0) {
        q.push(st.top());
        st.pop();
    }
    for(int i = 0; i<n-k; i++) {
        q.push(q.front());
        q.pop();
    }
}
int main () {
    queue<int> q;
    for(int i = 1; i<=5; i++) {
        q.push(i);
    }
    display(q);
    reverse(q);
    display(q);
    reverse(q);
    display(q);
    reverse(q,3);
    display(q);
}
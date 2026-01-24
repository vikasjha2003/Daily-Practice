#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st) {
    if(st.size()==0) return;
    int x = st.top();
    cout<<st.top()<<" ";
    st.pop();
    display(st);
    st.push(x);
}
void pushatb(stack<int>& st, int a) {
    if(st.size()==0) {
        st.push(a);
        return;
    }
    int x = st.top();
    st.pop();
    pushatb(st,a);
    st.push(x);
}
void reverse(stack<int>& st) {
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushatb(st,x);
}
int main () {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}
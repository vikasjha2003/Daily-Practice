#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> &s) {
    if(s.size()==0) return;
    cout<<s.top()<<" "; // top to bottom
    int x = s.top();
    s.pop();
    display(s);
    s.push(x); // to ensure the stack remains unchanged.
}
void displayrev (stack<int> &s) {
    if(s.size()==0) return;
    int x = s.top();
    s.pop();
    displayrev(s);
    s.push(x); // to ensure the stack remains unchanged.
    cout<<s.top()<<" "; // bottom to top
}
void pushatbottom (stack<int> &s) {
    if(s.size()==0) {
        s.push(55);
        return;
    }
    int x = s.top();
    s.pop();
    pushatbottom(s);
    s.push(x); // to ensure the stack remains unchanged.
}
void pushatidx (stack<int> &s, int a) {
    if(s.size()==a) {
        s.push(77);
        return;
    }
    int x = s.top();
    s.pop();
    pushatidx(s,a);
    s.push(x); // to ensure the stack remains unchanged.
}
int main () {
    stack<int> st;
    st.push(5); // bottom
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(7);
    st.push(1);
    st.push(6); // top
    display(st);
    cout<<endl;
    displayrev(st);
    cout<<endl;
    pushatbottom(st);
    display(st);
    cout<<endl;
    pushatidx(st,5);
    display(st);
}
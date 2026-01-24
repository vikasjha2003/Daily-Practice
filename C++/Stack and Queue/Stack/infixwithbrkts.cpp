#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prio (char c) {
    if(c == '+' || c == '-') return 1;
    else return 2;
}
int calci (int val1,int val2, char op) {
    if(op == '+') return val1 + val2;
    else if(op == '-') return val1 - val2;
    else if(op == '*') return val1 * val2;
    else return val1 / val2;
}
int main () {
    string str = "(2+4)*6/8-3";
    stack<int> val;
    stack<char> op;
    for(int i = 0; i<str.length(); i++) {
        if(isdigit(str[i])) val.push(str[i] - '0');
        else {
            if(op.empty()) op.push(str[i]);
            else if (str[i] == '(' || op.top() == '(') op.push(str[i]);
            else if (str[i] == ')') {
                while(op.top() != '(') {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ope = op.top();
                    op.pop();
                    int ans = calci(val1,val2,ope);
                    val.push(ans); 
                }
                op.pop();
            }
            else if (prio(str[i]) > prio(op.top())) op.push(str[i]);
            else {
                while(!op.empty() && prio(str[i]) <= prio(op.top())) {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ope = op.top();
                    op.pop();
                    int ans = calci(val1,val2,ope);
                    val.push(ans); 
                }
                op.push(str[i]);
            }
        }
    }
    while(!op.empty()) {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ope = op.top();
        op.pop();
        int ans = calci(val1,val2,ope);
        val.push(ans); 
    }
    cout<<val.top()<<endl;
}
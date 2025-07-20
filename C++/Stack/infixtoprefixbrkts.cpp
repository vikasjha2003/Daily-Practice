#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prio (char c) {
    if(c == '+' || c == '-') return 1;
    else return 2;
}
string calci (string val1,string val2, char op) {
    string ans = ""; 
    ans.push_back(op);
    ans += val1;
    ans += val2;
    return ans;
}
int main () {
    string str = "()";
    stack<string> val;
    stack<char> op;
    for(int i = 0; i<str.length(); i++) {
        if(isdigit(str[i])) val.push(to_string(str[i] - '0'));
        else {
            if(op.empty()) op.push(str[i]);
            else if (str[i] == '(') op.push(str[i]);
            else if (str[i] == ')') {
                while(op.top() != '(') {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ope = op.top();
                    op.pop();
                    string ans = calci(val1,val2,ope);
                    val.push(ans);
                }
                op.pop();
            }
            else if (op.top() == '(') op.push(str[i]);
            else if (prio(str[i]) > prio(op.top())) op.push(str[i]);
            else {
                while(!op.empty() && prio(str[i]) <= prio(op.top())) {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ope = op.top();
                    op.pop();
                    string ans = calci(val1,val2,ope);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    while(!op.empty()) {
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char ope = op.top();
        op.pop();
        string ans = calci(val1,val2,ope);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}
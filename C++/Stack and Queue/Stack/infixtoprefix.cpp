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
    string str = "2+4*6/8-3";
    stack<string> val;
    stack<char> op;
    for(int i = 0; i<str.length(); i++) {
        char c = str[i];
        if(isdigit(c)) val.push(to_string(c-48));
        else {
            if(op.empty() || prio(c) > prio(op.top())) op.push(c);
            else {
                while(!op.empty() && prio(c) <= prio(op.top())) {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ope = op.top();
                    op.pop();
                    string ans = calci(val1,val2,ope);
                    val.push(ans);
                }
                op.push(c);
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
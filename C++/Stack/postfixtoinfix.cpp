#include<iostream>
#include<string>
#include<stack>
using namespace std;
string calci (string val1,string val2, char op) {
    string str = val1;
    str.push_back(op);
    str += val2;
    return str;
}
int main () {
    string str = "246*8/+3-";
    stack<string> val;
    for(int i = 0; i<str.length(); i++) {
        if(isdigit(str[i])) val.push(to_string(str[i] - '0'));
        else {
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = calci(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}
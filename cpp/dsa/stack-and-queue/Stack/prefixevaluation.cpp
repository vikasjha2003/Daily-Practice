#include<iostream>
#include<string>
#include<stack>
using namespace std;
int calci (int val1,int val2, char op) {
    if(op == '+') return val1 + val2;
    else if(op == '-') return val1 - val2;
    else if(op == '*') return val1 * val2;
    else return val1 / val2;
}
int main () {
    string str = "-+2/*4683";
    stack<int> val;
    for(int i = str.length()-1; i>=0 ; i--) { // ulta chal rahe hai
        if(isdigit(str[i])) val.push(str[i] - '0');
        else {
            int val1 = val.top(); // pahle val 1 aur baad mein val 2
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = calci(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}
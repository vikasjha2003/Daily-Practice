#include<iostream>
#include<string>
#include<stack>
using namespace std;
string calci (string val1,string val2, char op) {
   string str = val1;
   str += val2;
   str.push_back(op);
   return str;
}
int main () {
    string str = "-+2/*4683";
    stack<string> val;
    for(int i = str.length()-1; i>=0 ; i--) { // ulta chal rahe hai
        if(isdigit(str[i])) val.push(to_string(str[i] - '0'));
        else {
            string val1 = val.top(); // pahle val 1 aur baad mein val 2
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = calci(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}
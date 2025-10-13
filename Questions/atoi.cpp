#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
    bool flag = false;
    long num = 0;
    int i = 0;
    while(s[i] == ' ') i++;
    if(s[i] == '-' || s[i] == '+') {
        flag = (s[i] == '-');
        i++;
    }
    while(i<s.length() && s[i] == '0') i++;
    if(i == s.length() || (s[i] < '0' || s[i] > '9')) return 0;
    else {
        while(i<s.length()) {
            if(s[i] < '0' || s[i] > '9' ) break;
            num = num*10 + (s[i] - '0');
            if(num > INT_MAX) {
                if(flag) return INT_MIN;
                else return INT_MAX;
            }
            i++;
        }
    }
    if(flag) return (int)-num;
    else return (int)num;
}
int main () {
    string a = "-42";
    cout<<myAtoi(a);
}
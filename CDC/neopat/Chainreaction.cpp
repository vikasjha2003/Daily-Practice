#include<iostream>
#include<string>
// remove all occurence of string st from string str and if after these operations string is empty then print "FRULA"
using namespace std;
int main () { // pure brute force approach
    string str(100000,'a');
    string st = "aa";
    int a = str.length();
    while(1) {
        for(int i = 0; i<str.length(); i++) {
            string s = str.substr(i,st.size());
            if(s == st) {
                str.erase(i,st.length());
                i--;
            }
        }
        if(str.length() == a) break;
        else a = str.length();
    }
    if(str.length() == 0) cout<<"FRULA";
    else cout<<str;
}
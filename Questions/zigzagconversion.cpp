#include<iostream>
#include<vector>
#include<string>
using namespace std;
string convert(string s, int numRows) { // "PINALSIGYAHRPI"
    if(numRows == 1) return s;
    vector<string> str(numRows, "");
    int count = 0;
    bool flag = false;
    int j = -1;
    while(count < s.length()) {
        if (flag) {
            str[--j].push_back(s[count]);
        } else {
            str[++j].push_back(s[count]);
        }
        count++;
        if(j == numRows -1) flag = true;
        if(j == 0) flag = false;
    }
    string st = "";
    for(string a : str) {
        st += a;
    }
    return st;
}
int main () {
    string str = "PAYPALISHIRING";
    int n = 4;
    cout<<convert(str,n);
}
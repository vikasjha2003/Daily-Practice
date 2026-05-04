#include<iostream>
#include<string>
using namespace std;
void permutationstring(string st,string str) {
    if(str.length()==0) {
        cout<<st<<endl;
        return;
    }
    for(int i = 0; i<str.length();i++) {
        char c = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutationstring(st+c,left+right);
    }
}
int main () {
    string str = "abc";
    permutationstring("",str);
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string str = "Vikas";
    // getline(cin,str);
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;
    // str.push_back('a');
    // str.push_back('e');
    // str.push_back('i');
    // str.push_back('o');
    // str.pop_back();
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;
    string st = "kumar";
    st = str + st;
    cout<<st<<endl;
    reverse(st.begin()+2,st.end()-1);
    cout<<st;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    cout<<"Enter the first string: ";
    string str;
    getline(cin,str);
    cout<<"Enter the second string: ";
    string st;
    getline(cin,st);
    sort(str.begin(),str.end());
    sort(st.begin(),st.end());
    if(str == st) cout<<"Anagram"<<endl;
    else cout<<"Not Anagram"<<endl;
}
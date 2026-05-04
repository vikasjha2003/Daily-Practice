#include<iostream>
#include<string>
using namespace std;
bool palindrome(string st, int i , int j) {
    if(i>j) return true;
    if(st[i]!=st[j]) return false; 
    return palindrome(st,i+1,j-1);
}
int main () {
    string str = "hog";
    cout<<palindrome(str,0,str.length()-1);   
}
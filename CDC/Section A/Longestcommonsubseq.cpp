#include<iostream>
#include<string>
using namespace std;
int helper(string text1, string text2, int m, int n,int count) {
    if(m<0 || n<0) return count; // base case, if either is less then 0 then we are sure to not encounter any new equal character.
    int a = 0; // to store return value of m case
    int b = 0; // to store return value of n case
    if(text1[m]==text2[n]) return helper(text1,text2,m-1,n-1,count+1); // if match thenreduce both m and n pointers
    else {
        a = helper(text1,text2,m-1,n,count); // for diagonal traversal
        b = helper(text1,text2,m,n-1,count); // for diagonal traversal
    }
    return max(a,b); // maximum of both the traversal results
}
int lcs(string text1, string text2) { // TLE on lc
    int m = text1.length()-1;
    int n = text2.length()-1;
    return helper(text1,text2,m,n,0);
}
int main () {
    string str = "abcde";
    string st = "bacd";
    cout<<"The longest common subsequence is: "<<lcs(str,st);
}
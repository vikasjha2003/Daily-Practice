#include<iostream>
#include<string>
using namespace std;
bool check (string &s, int n, int i) {
    if(n<=i) return true;
    if(s[i] != s[n]) return false;
    return check(s,n-1,i+1);
}
bool isPalindrome(string s) {
    for(int i = 0; i<s.length(); i++) {
        if((s[i]>= 'A' && s[i]<='Z') || (s[i]>= 'a' && s[i]<= 'z')) {
            if (s[i]>= 'A' && s[i]<= 'Z') s[i] += 32;
        } else {
            s.erase(i,1);
            i--;
        }
    }
    return check(s,s.length()-1,0);
}
int main () {
    string str = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(str)<<endl;
}
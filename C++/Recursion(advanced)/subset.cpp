#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void subset(string a, string b, bool flag) {
    sort(b.begin(), b.end());
    char c = b[0];
    if(b.length()==0) {
        cout<<a<<endl;
        return;
    }
    if(b.length()==1) {
        if (flag == true) subset(a+c,b.substr(1), true);
        subset(a,b.substr(1), true);   
        return;
    }
    char d = b[1];
    if(c==d) {
        if (flag == true) subset(a+c,b.substr(1), true);
        subset(a,b.substr(1), false);
    } else {
        if (flag == true) subset(a+c,b.substr(1), true);
        subset(a,b.substr(1), true);
    }
}

// Can't deal with duplicates

void subsetidx (string a, string b, int idx) {
    if(idx==b.length()) {
        cout<<a<<endl;
        return;
    }
    subsetidx(a,b,idx+1);
    subsetidx(a+b[idx],b,idx+1);
}
int main () {
    string str = "abc";
    subset("",str,true);
    // subsetidx("",str,0);
}
#include<iostream>
#include<string>
using namespace std;
int main () {
    string st;
    cout<<"Please enter the string: ";
    getline(cin,st);
    int count = 0;
    for(int i = 0; st[i]!='\0'; i++) {
        if (st[i]=='a' ||st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u') 
        count++;
        else if (st[i]=='A' ||st[i]=='E' ||st[i]=='I' ||st[i]=='O' ||st[i]=='U')
        count++;
    }
    cout<<"No. of vowels in the given string: "<<count<<endl;
    return 0;
}
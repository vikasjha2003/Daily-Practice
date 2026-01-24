#include<iostream>
using namespace std;
int main () {
    char c;
    cout<<"Enter the character : ";
    cin>>c;
    int x = (int)c;
    if ((x>=65 && x<=90) || (x>=97 && x<=122)) {
        if (c=='a' || c=='A') {
        cout<<c<<" is a Vowel";
        } else if (c=='e' || c=='E') {
        cout<<c<<" is a Vowel";
        } else if (c=='i' || c=='I') {
        cout<<c<<" is a Vowel";
        } else if (c=='o' || c=='O') {
        cout<<c<<" is a Vowel";
        } else if (c=='u' || c=='U') {
        cout<<c<<" is a Vowel";
        } else {
        cout<<c<<" is not a vowel";
        }    
    } else {
        cout<<c<<" is not an alphabet";
    }
    return 0;   
}
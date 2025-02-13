#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main () {

    // Q1. Input a string and concatenate with its reverse string and print it.
    // string str,st;
    // cout<<"Enter the string: ";
    // getline(cin,str);
    // st = str;
    // cout<<str<<endl;
    // reverse(str.begin(), str.end());
    // st += str;
    // cout<<st;

    // Q2. Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
    // string str;
    // cout<<"Enter the number: ";
    // cin>>str;
    // if (str.length()<2) cout<<"invalid input";
    // else {
    //     sort(str.begin(), str.end());
    //     for(int i = str.length()-2; i>=0; i--) {
    //         if (str[i]<str[i+1]) {
    //             cout<<"Second maximum value: "<<str[i];
    //             break;
    //         }
    //     }    
    // }

    // Q3. Input a string and return the number of substrings that contain only vowels.
    // string str;
    // cout<<"Enter the string: ";
    // getline(cin,str);
    // int n,count;
    // count = 0;
    // n = 0;
    // for(int i = 0; i<str.length(); i++) {
    //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
    //         count++;
    //     }
    //     else {
    //         n += (count*(count+1))/2;
    //         count = 0;
    //     }
    //     if (i==str.length()-1){
    //         n += (count*(count+1))/2;
    //     } 
    // }
    // cout<<n<<endl;

    // Q4. Given an array of strings. Check whether they are anagram or not.
    // string s;
    // cout<<"Enter the string: ";
    // getline(cin,s);
    // string t;
    // cout<<"Enter the string: ";
    // getline(cin,t);
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // if(s==t) cout<<"Annagram";
    // else cout<<"Not Annagram";

    // Q5. Given a sentence ‘str’, return the word that is lexicographically maximum.
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    string temp;
    string min = "";
    stringstream ss(s);
    while(ss>>temp) {
        if(temp > min) {
            min = temp;
        }
    }
    cout<<min<<endl;
}
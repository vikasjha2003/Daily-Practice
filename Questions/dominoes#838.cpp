#include<iostream>
#include<string>
using namespace std;

// ONLY VALID FOR ONE PASS

string pushDominoes(string dominoes) {
    // string str = dominoes;
    // for(int i = 0; i<dominoes.length(); i++) {
    //     if(str[i]=='.') {
    //         if(i==0 && dominoes[i+1]=='L') {
    //             str[i] = 'L';
    //         } 
    //         else if (i==dominoes.length()-1 && dominoes[i-1]=='R') {
    //             str[i] = 'R';
    //         } 
    //         else {
    //             if(dominoes[i+1]=='L' && dominoes[i-1]=='R') {
    //                 continue;
    //             } else if (dominoes[i+1]=='L') {
    //                 str[i] = 'L';
    //             } else if (dominoes[i-1]=='R') {
    //                 str[i] = 'R';
    //             }
    //         }
    //     }
    // }
    // return str;
}

int main () {
    string str = "..R..";
    cout<<pushDominoes(str);

}
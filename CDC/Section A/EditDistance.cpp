// Recursion final boss problem (kinda)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int minDistance(string word1, string word2, int i, int j) {
    if(i==word1.length()) return word2.length()-j; // if i reaches end then all characters of word 2 must be added in word 1 to make equal
    if(j==word2.length()) return word1.length()-i; // if j reaches end then all characters of word 2 must be removed from word 1 to make equal
    if(word1[i]==word2[j]) {
        return minDistance(word1,word2,i+1,j+1); // if equal already then we simply traverse further without making any change so no operation increase
    } else {

        // All of these are the possible routes and we just choose the one which costs us the minimum i.e. the count is least for.

        int a = 1 + minDistance(word1,word2,i+1,j); // we move forward in word 1 to find the character which should be deleted to make the words equal. 
        int b = 1 + minDistance(word1,word2,i,j+1); // we move in word2 to find the character which needs to be inserted here to make the words equal.
        int c = 1 + minDistance(word1,word2,i+1,j+1); // replaced so both increase
        return min({a,b,c}); // finds minimum of the vector and returns it, part of the algorithm library
    }
}
int main () {
    string str = "horse";
    string st = "rose";
    cout<<"The minimum no. of operations is: "<<minDistance(str,st,0,0);
}
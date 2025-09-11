// I will share two approach which I could figure out for this problem
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// string sortVowels(string& s) { O(nlogn)
//     string str = "";
//     for(char c : s) {
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U') {
//             str.push_back(c);
//         }
//     }
//     sort(str.begin(),str.end());
//     int i = 0;
//     for(char& c : s) {
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U') {
//             c = str[i];
//             i++;
//         }
//     }
//     return s;
// }
string sortVowels(string& s) { // O(n)
    vector<int> v (128,0);
    for(char c : s) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U') {
            int a = (int)c;
            v[a]++;
        }
    }
    int i = 0;
    for(char& c : s) {
        while(i<v.size() && v[i] == 0 ) i++;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U') {
            c = (char)i;
            v[i]--;
        }
    }
    return s;
}
int main () {
    string str = "VikaskumarJhA";
    // string st = sortVowels(str);
    string st = sortVowels(str);
    cout<<str;
}
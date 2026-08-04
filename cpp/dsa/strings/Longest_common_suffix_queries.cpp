#include<iostream>
#include<string>
#include<vector>
using namespace std;

// int lcs (string &str, string &s) {
//     if(s.back() != str.back()) return 0;

//     int i = str.length() - 1;
//     int j = s.length() - 1;

//     while(i >= 0 && j >= 0) {
//         if(str[i] != s[j]) break;
//         i--;
//         j--;
//     }

//     return str.substr(i+1).length();
// }

// vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
//     vector<int> ans;

//     for(string &s : wordsQuery) {
//         int idx = -1;
//         int size = 0;

//         for(int k = 0; k<wordsContainer.size(); k++) {
//             int sz = lcs(wordsContainer[k],s);
//             if(idx == -1 || sz > size) {
//                 idx = k;
//                 size = sz;
//             } else if (sz == size && wordsContainer[k].length() < wordsContainer[idx].length()) {
//                 idx = k;
//             }
//         }

//         ans.push_back(idx);
//     }

//     return ans;
// }

vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
    vector<int> ans;

    

    return ans;
}

int main () {
    vector<string> wordsContainer = {"abcd","bcd","xbcd"};
    vector<string> wordsQuery = {"cd","bcd","xyz"};

    vector<int> v = stringIndices(wordsContainer,wordsQuery);

    for(int i : v) {
        cout<<i<<" ";
    }
}
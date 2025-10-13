#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;
// vector<string> removeAnagrams(vector<string>& words) { sorting approach
//     vector<string> v;
//     unordered_set<string> st;
//     v.push_back(words[0]);
//     sort(words[0].begin(),words[0].end());
//     st.insert(words[0]);
//     for(int i = 1; i<words.size(); i++) {
//         string str = words[i];
//         sort(words[i].begin(),words[i].end());
//         if(st.find(words[i]) == st.end()) {
//             st.insert(words[i]);
//             v.push_back(str);
//         }
//     }
//     return v;
// }
bool isanagram(string &p, string &q) {
    vector<int> freq(26,0);
    for(int i = 0; i<p.length(); i++) {
        freq[p[i] - 'a']++;
    }
    for(int i = 0; i<q.length(); i++) {
        freq[q[i] - 'a']--;
    }
    for(int i = 0; i<26; i++) {
        if (freq[i] != 0) return false;
    }
    return true;
}
vector<string> removeAnagrams(vector<string>& words) { // two pointer
    vector<string> ans;
    int i = 0;
    int j = 1;
    while(i<words.size()) {
        while(j<=words.size() -1 && isanagram(words[i],words[j])) j++;
        ans.push_back(words[i]);
        i = j;
        j++;
    }
    return ans;
}
int main () {
    vector<string> words = {"abba","baba","bbaa","cd","cd"};
    vector<string> nums = removeAnagrams(words);
    for(string q : nums) {
        cout<<q<<endl;
    }
}
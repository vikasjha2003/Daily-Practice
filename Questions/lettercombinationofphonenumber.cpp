#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void helper(vector<string> &, unordered_map<int,string> &, string &, string &, int); // forward declaration

void helper1(vector<string> & stores, unordered_map<int,string> &mpp, string &ans, int key ,int idx, string &digits) {
    for(int i = 0; i<mpp[key].length(); i++) {
        char c = mpp[key][i];
        ans.push_back(c);
        helper(stores,mpp,ans,digits,idx);
        ans.pop_back();
    }
}

void helper(vector<string> & stores, unordered_map<int,string> &mpp, string & ans, string & digits, int idx) {
    if(idx == digits.size()) {
        stores.push_back(ans);
        return;
    }
    int a = digits[idx] - 48;
    helper1(stores,mpp,ans,a,idx+1,digits);
}

vector<string> letterCombinations(string &digits) {
    if(digits.size() == 0) return {};
    unordered_map<int,string> mpp = {
        {2 , "abc"},
        {3 , "def"},
        {4 , "ghi"},
        {5 , "jkl"},
        {6 , "mno"},
        {7 , "pqrs"},
        {8 , "tuv"},
        {9 , "wxyz"},
    };
    vector<string> v;
    string str = "";
    helper(v,mpp,str,digits,0);
    return v;
}
int main () {
    string num = "23";
    vector<string> v = letterCombinations(num);
    for(string s : v) {
        cout<<s<<endl;
    }
}
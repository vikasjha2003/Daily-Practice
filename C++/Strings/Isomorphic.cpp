#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main () {
    string s = "Vikas";
    string t = "Priya";
    if(s.length()!=t.length()) cout<<"False";
    vector<int> v(150,200); // stored 200 because difference will never be 200 so no error
    for(int i = 0; i<s.length(); i++) {
        int idx = (int)s[i];
        if (v[idx]==200) v[idx] = s[i] - t[i];
        else if (v[idx] == (s[i] - t[i])) continue;
        else {
            cout<<"False";
            break;
        }
    }

    // the above code might fail for few problems as we are only checking from perspective of s, so now we must also check from the perspective of t to make sure it works for all the cases.
    // now again restore the array as it was
    for(int i = 0; i<v.size(); i++) v[i] = 200;

    for(int i = 0; i<t.length(); i++) {
        int idx = (int)t[i];
        if (v[idx]==200) v[idx] = t[i] - s[i];
        else if (v[idx] == (t[i] - s[i])) continue;
        else {
            cout<<"False";
            break;
        }
    }
    cout<<"True";
}
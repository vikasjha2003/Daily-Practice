// We have two string(json1 and json2) , these string contain key value pairs and we have to return those key which are same in both string but their value are different.
#include<bits/stdc++.h>
using namespace std;
vector<string> stri(string json1, string json2) {
    vector<string> ans;
    unordered_map<string,string> mpp;
    string str = "";
    string st = "";
    for(int i = 1; i<json1.length()-1; i++) {
        while(json1[i] != ':') {
            str.push_back(json1[i]);
            i++;
        }
        i++;
        while(json1[i] != ',' && json2[i] != '}') {
            st.push_back(json1[i]);
            i++;
        }
        mpp[str] = st;
        str = "";
        st = "";
    }
    for(int i = 1; i<json2.length()-1; i++) {
        while(json2[i] != ':') {
            str.push_back(json2[i]);
            i++;
        }
        i++;
        while(json2[i] != ',' && json2[i] != '}') {
            st.push_back(json2[i]);
            i++;
        }
        if(mpp.find(str) != mpp.end()) {
            if(st != mpp[str]) ans.push_back(str);
        }
        str = "";
        st = "";
    }
    return ans;
}
int main () {
    string json1 = "{\"Name\":\"Alex\",\"Age\":\"25\",\"country\":\"africa\"}";
    string json2 = "{\"Name\":\"Alex\",\"Age\":\"35\",\"state\":\"africa\"}";
    cout<<json1<<endl<<json2<<endl<<endl;
    // output should be "Age";
    vector<string> v = stri(json1,json2);
    for(string q : v) {
        cout<<q<<endl;
    }
} 
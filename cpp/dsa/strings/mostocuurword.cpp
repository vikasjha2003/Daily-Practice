#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main () {
    string str;
    cout<<"Please enter the string: ";
    getline(cin,str);
    stringstream st(str);
    string temp;
    vector<string> v;
    while(st>>temp) {
        v.push_back(temp);
    }
    // print vector
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl<<endl<<endl;
    sort(v.begin(),v.end());
    // print vector after sort
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    int count = 1;
    int mcount = 0;
    for(int i = 0; i<v.size(); i++) {
        if(v[i]==v[i+1]) {
            count ++;
        } 
        else {
            count = 1;
        }
        if (mcount<count) {
            mcount = count;
        }
    }
    for (int i = 0;i<v.size(); i++) {
        if(v[i]==v[i+1]) {
            count ++;
        }
        else {
            count = 1;
        }
        if ( mcount == count) {
            cout<<v[i]<<" "<<mcount<<endl;
        }
    }
}
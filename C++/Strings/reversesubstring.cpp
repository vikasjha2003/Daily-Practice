#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string st;
    getline(cin,st);
    cout<<st<<endl;
    reverse(st.begin()+2,st.begin()+6);
    cout<<st<<endl;

    // substring inbuilt function
    // substr(kaha se,kitne length tak)
    cout<<st.substr(3,5);
}
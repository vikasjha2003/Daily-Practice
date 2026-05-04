#include<bits/stdtr1c++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i = 0;
        int j = n-1;
        while(i<j) {
            if(str[i] == str[j]) break;
            i++;
            j--;
        }
        cout<<j-i+1<<endl;
    }
}
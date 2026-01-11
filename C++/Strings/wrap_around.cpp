#include<bits/stdc++.h>
using namespace std;
int main () {
    string a = "layout";
    int hash = a[0] - 'a';
    cout<<hash<<endl<<endl;
    for(int i = 0; i<a.length(); i++) {

        // a[i] = 'a' + ((a[i] - 'a') - hash) % 26; 
        
        // will give wrong because in cpp -1 % 26 = -1, not 25. add 26 so that negative will become positive and 26 % 26 = 0 so it won't affect anything in answer.

        a[i] = 'a' + (a[i] - 'a' - hash + 26) % 26;
    }
    cout<<a;
}
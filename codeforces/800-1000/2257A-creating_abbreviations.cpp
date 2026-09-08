#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        int arr[26] = {0};

        for(int i = 1; i<= n; i++) {
            string str;
            cin>>str;
            arr[str[0] - 'a']++;
        }

        bool flag = true;
        for(int i = 1; i<= m; i++) {
            string str;
            cin>>str;
            for(char c : str) {
                if(arr[c-'A'] == 0) {
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
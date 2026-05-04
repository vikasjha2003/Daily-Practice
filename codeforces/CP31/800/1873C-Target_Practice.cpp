#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int res = 0;
        for(int i = 0; i<10; i++) {
            for(int j = 0; j< 10; j++) {
                char c;
                cin>>c;
                if(c == 'X') {
                    if(i >= 4 && i <= 5 && j >= 4 && j <= 5) {
                        res += 5;
                    } else if(i >= 3 && i <= 6 && j >= 3 && j <= 6) {
                        res += 4;
                    } else if(i >= 2 && i <= 7 && j >= 2 && j <= 7) {
                        res += 3;
                    } else if(i >= 1 && i <= 8 && j >= 1 && j <= 8) {
                        res += 2;
                    } else {
                        res += 1;
                    }
                }
            }
        }
        cout<< res <<endl;
    }
}
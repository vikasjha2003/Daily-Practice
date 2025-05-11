#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main () {
    string str[] = {"900","456","793","45"};
    int maxi = 0;
    int pos = 0;
    for(int i = 0; i<4; i++) {
        if(maxi<stoll(str[i])) {
            maxi = stoll(str[i]);
            pos = i;
        } 
    }
    cout<<"The maximum number "<<maxi<<" is present at index "<<pos;
}
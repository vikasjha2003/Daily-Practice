#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    int count,mcount;
    string str;
    cout<<"Please enter the string: ";
    getline(cin,str);
    sort(str.begin(),str.end());
    count = 0;
    mcount = 0;
    for(int i =0; i<str.size(); i++) {
        if(str[i]==str[i+1]) {
            count++;
        } else if(mcount < count){
            mcount = count;
            count = 0;
        } else {
            count = 0;
        }
    } cout<<mcount+1;  // +1 to account for the case when there is similar  to   the left but not to the right.

    // alternate approach, make an array of size 26 and use it to count and find maximum from array. 
}
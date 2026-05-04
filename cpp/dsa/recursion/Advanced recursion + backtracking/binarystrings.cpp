#include<iostream>
#include<string>
using namespace std;
// generating binary string without consecutive 1
void binarystring(string str, int n) {
    if(n==0) {
        cout<<str<<endl;
        return;
    }
    if(str.length()==0) {
        binarystring(str+'0',n-1);
        binarystring(str+'1',n-1);
        return;
    }
    binarystring(str+'0',n-1);
    if(str[str.length()-1] != '1') binarystring(str+'1',n-1);    
}
int main () {
    int n = 2;
    // generating binary string without consecutive 1
    binarystring("",n);
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// void removechar(string ans, string orig) {
//     if(orig.length()==0) {
//         return;
//     }
//     char ch = orig[0];
//     if(ch=='a') removechar(ans,orig.substr(1));
//     else removechar(ans+ch,orig.substr(1));
// }
void removechar(string ans, string orig, int idx) {
    if(orig.length()==idx) {
        cout<<ans;
        return;
    }
    char ch = orig[idx];
    if(ch=='a') removechar(ans,orig,idx+1);
    else removechar(ans+ch,orig,idx+1);
}
int main () {
    string str = "Vikas Jha";
    removechar("",str,0);
}
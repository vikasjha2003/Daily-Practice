#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string lexSmallest(string s) {
    string mini = s;
    int n = s.size();
    for(int k = 1; k<=n; k++) {
        string s1 = s;
        reverse(s1.begin(), s1.begin() + k);
        mini = min(mini, s1);
        string s2 = s;
        reverse(s2.begin() + k, s2.end());
        mini = min(mini, s2);
    }
    return mini;
}
// void reversef (string &s,string &mini, int k) {
//     string str = s;
//     int i = 0;
//     int j = k-1;
//     while(i<j) {
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     mini = min(str,mini);
// }
// void reversel (string &s,string &mini, int k) {
//     string str = s;
//     int i = k;
//     int j = str.size()-1;
//     while(i<j) {
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     mini = min(str,mini);
// }
// string lexSmallest(string s) {
//     string mini = s;
//     int n = s.size();
//     for(int i = 1; i<=n; i++) {
//         reversef(s,mini,i);
//         reversel(s,mini,i);
//     }
//     return mini;
// }
int main () {
    string s = "dcab";
    cout<<lexSmallest(s);
}
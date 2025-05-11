#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec) {
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightways + downways;
    return totalways; 
}
void printpath(int sr,int sc,int er,int ec, string s) {
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
    return; 
}
int maze1(int sr, int sc) {
    if(sr<1||sc<1) return 0;
    if (sr==1&&sc==1) return 1;
    int rightways = maze1(sr,sc-1);
    int downways = maze1(sr-1,sc);
    return rightways+downways;
}
void printpath1 (int sr, int sc, string s) {
    if(sr<1||sc<1) return;
    if (sr==1&&sc==1) {
        cout<<s<<endl;
        return;
    }
    printpath1(sr,sc-1,s+"R");
    printpath1(sr-1,sc,s+"D");
    return;
}
int main () {
    int a,b;
    cout<<"destination index: ";
    cin>>a>>b; 
    cout<<maze(1,1,a,b)<<endl;
    //printpath(1,1,a,b,"");
    cout<<maze1(a,b)<<endl;  //only 2 variables
    printpath1(a,b,""); // only 2 variables
}
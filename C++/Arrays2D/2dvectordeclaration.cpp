#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<vector<int>> v(3, vector<int> (4,2));
    cout<<v.size()<<endl;
    cout<<v[1].size()<<endl;
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<4; j++) {
            cout<<v[i][j]<<"\t";
        } cout<<endl;
    }
    return 0;
}

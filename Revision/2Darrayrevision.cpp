#include<iostream>
#include<vector>
using namespace std;
int main () {


    // Array initialisation
    // int a [50][50];
    // int b [3][2] = {{1,2},{2,3},{3,4}};
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<2; j++) {
    //         cout<<b[i][j]<<" ";
    //     } cout<<endl;
    // }
    // cout<<"Enter array a: ";
    // for(int i = 0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>>a[i][j];
    //     }
    // }
    // for(int i = 0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cout<<a[i][j]<<" ";
    //     } cout<<endl;
    // }


    // vector initialisation
    vector<vector<int>> v;
    vector<int> p = {1,2,3};
    v.push_back(p);
    v.push_back(p);
    cout<<v.size()<<" "<<v[0].size()<<endl;
    vector<int> t = {4,5};
    v.push_back(t);
    v.push_back(p);
    for(int i = 0; i<v.size(); i++) {
        for(int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }
    // other ways to initialise vector array
    cout<<endl;
    vector<vector<int>> pt = {{1,2},{1},{1,2,3}};
    for(int i = 0; i<pt.size(); i++) {
        for(int j = 0; j<pt[i].size(); j++){
            cout<<pt[i][j]<<" ";
        } cout<<endl;
    }
    vector<vector<int>> v1 (2,vector<int>(3,4));
    // it should mean a 2d array with 2 rows, 3 columns and 4 as element. Lets check
    for(int i = 0; i<v1.size(); i++) {
        for(int j = 0; j<v1[i].size(); j++){  // v1[i].size is taken to take into account the fact that no. of columns can be different in 2D vectors unlike arrays.
            cout<<v1[i][j]<<" ";
        } cout<<endl;
    }

    // That about sums up all the things I know and can remember. 
}
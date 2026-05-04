#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    vector<int> input (3);
    cin>>input[0]>>input[1]>>input[2];
    sort(input.begin(),input.end());
    if(input[2] - input[0] < 10) cout<<"final "<<input[1];
    else cout<<"check again";
}
#include<iostream>
#include<vector> // Requires greedy
#include<algorithm>
using namespace std;
int maximumTastiness(vector<int>& price, int k) {
    sort(price.begin(),price.end());
    int n = price.size();
   

}
int main () {
    vector<int> v = {13,5,1,8,21,2};
    int k = 3;
    cout<<maximumTastiness(v,k);
}
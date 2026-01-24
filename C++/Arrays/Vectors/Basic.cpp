#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v;  // No need to mention size
    v.push_back(6);
    cout<<v.size()<<"\t"<<v.capacity()<<endl; 
    //Size shows no. of elements in vector but capacity shows the total capacity of vector.
    v.push_back(5);
    cout<<v.size()<<"\t"<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<"\t"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<"\t"<<v.capacity()<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
    v[0]=69;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
}
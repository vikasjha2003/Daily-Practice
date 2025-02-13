#include<iostream>
#include<vector>
using namespace std;
int main () {
    // array initialisation
    // int a;
    // cout<<"Enter the length of array: ";
    // cin>>a;
    // int A[a];
    // cout<<"Enter the elements of the array: ";
    // for(int i = 0; i<a; i++) {
    //     cin>>A[i];
    // }
    // int B[] = {1,2,3,4,5,6};
    // // output
    // cout<<"The entered array: ";
    // for(int i = 0; i<a; i++) {
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
    // vector initialisation
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;   
    v.pop_back();
    cout<<v.size()<<endl;       // shows no. of elements in the vector
    cout<<v.capacity()<<endl;  // shows capacity of vector

    // Other initialisation

    vector<int> v1 (10,5);
    for(int i = 0; i<v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    // 10 is size of vector and 5 is element stored at each index.
}
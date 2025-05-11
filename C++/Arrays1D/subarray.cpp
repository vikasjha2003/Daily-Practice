// WAP to find all subarrays of the given array
#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> v (n);
    cout<<"Enter the elements of array :";
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }

    // printing all subarrays

    for(int st = 0; st<n; st++) {
        for(int en = st; en<n; en++) {
            for(int i = st; i<=en; i++) {
                cout<<v[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
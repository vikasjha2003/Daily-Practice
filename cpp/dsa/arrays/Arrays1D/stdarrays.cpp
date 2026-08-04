#include<iostream>
#include<array>

using namespace std;

int main () {
    array<int,6> arr;
    for(int i = 0; i<arr.size(); i++) {
        cout<<arr.at(i)<<" "; // garbage values
    }

    cout<<endl;

    cout<<arr.begin()<<" "; // returns a pointer

    cout<<endl;

    arr.fill(5);

    for(int i = 0; i<arr.size(); i++) {
        cout<<arr.at(i)<<" ";
    }
}
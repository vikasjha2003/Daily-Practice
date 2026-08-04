#include<iostream>
using namespace std;

int* returnMemory() {
    int result = 45;
    return &result;
}

int main () {
    int *it = nullptr;
    *it = 45; // will cause error since null pointer can't be dereferenced

    // Memory leaks if not properly handled memory. i.e. forgot to delete memory allocated.

    int* ptr = returnMemory();
    cout<<*ptr; // Dangling poiinter, trying to read memory which no longer exists in the heap

    // double free -> delete used on same pointer multiple times

}
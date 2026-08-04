#include<iostream>
#include<functional>
using namespace std;

typedef int (*pfnIntegerOperations)(int , int); // another way of declaring a function pointer c style

int add (int x, int y) {
    return x + y;
}

int multiply(int x , int y) {
    return x * y;
}

int main () {
    // function pointer for function of type int and two arguments of int type;
    // int(* fp)(int , int);
    // pfnIntegerOperations fp;

    function<int(int,int)> fp; // modern way of making function pointers, need to include functional 

    fp = add;

    cout<<fp(5,6);

    cout<<endl;

    fp = multiply;

    cout<<fp(5,6);

    int n;
    cin>>n;

    // use case for funuction pointer

    if(n == 1) {
        fp = add;
    } else {
        fp = multiply;
    }


}
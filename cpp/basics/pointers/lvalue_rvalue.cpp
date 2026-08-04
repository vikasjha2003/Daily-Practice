// lvalue -> Something with a memory location &(i)
// rvalue -> On the right side of an assignment, does not point anything
#include<iostream>
using namespace std;
int main () {
    int i = 10;
    // i is lvalue and 10 is rvalue

    // 10 = i  gives error: lvalue required as left operand

    int a = 1;
    int b = 2;
    int c = (a+b);
    // a, b, c -> lvalue | 1 , 2 , (a + b) -> rvalue

    // lvalue ref -> refers to lvalue (&)
    int &lvref = a;

    // rvalue ref -> refers to rvalue(&&)
    int &&rvref = a + b;
}
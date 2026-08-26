#include<iostream>

class vector {
    public:
        int a , b , c;
};

class array {
    private :
        int* arr;
    public :
        array () {
            std::cout<<"Constructor Called"<<std::endl;
            arr = new int[10];
            for(int i = 0; i<10; i++) {
                arr[i] = i*i;
            }
        }

        array(const array& data) {
            std::cout<<"Copy constructor called"<<std::endl;
            arr = new int[10];
            for(int i = 0; i<10; i++) {
                this->arr[i] = data.arr[i];
            }
        }

        ~array () {
            delete[] arr;
        }

        void printArray () {
            for(int i = 0; i<10; i++) {
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
        }

        void setData(int idx , int val) {
            arr[idx] = val;
        }
};

// Here we will learn about copy constructor and copy assignment

int main () {
    vector ob1;
    ob1.a = 5;
    ob1.b = 6;
    ob1.c = 7;

    vector ob2 = ob1;

    std::cout<<ob2.a<<" , "<<ob2.b<<" , "<<ob2.c<<std::endl;
    // it works which means cpp gives us a default copy constructor

    // But the default copy constructor makes shallow copy, not deep copy. so if we are working with dynammic memory it can result into wrong result

    array arr1;
    array arr2 = arr1;

    arr1.printArray();
    arr2.printArray();

    arr2.setData(1,100);
    arr1.setData(2,-100);

    arr1.printArray();
    arr2.printArray();

    // Both arrays get changed which means that the copy is a shallow copy that is assignment is taking place instead of copy.

    // remove the copy constructor to know what we mean.

    // so we make custom copy constructor which makes deep copy of array and not shallow copy to prevent unwanted modification of data.
}
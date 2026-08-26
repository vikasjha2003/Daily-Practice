#include<iostream>
using namespace std;

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

// Here we will learn about operator overloading.
// Operators in cpp are just functions which we call

int main () {
    
}
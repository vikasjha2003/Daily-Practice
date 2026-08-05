#include "student.hpp"
#include<iostream>

// constructor
student::student(std::string name) {
    std::cout<<"Constructor called"<<std::endl;
    this->name = name;
}

// Destructor
student::~student() {
    std::cout<<"Destructor called"<<std::endl;
}

// returns name of student
std::string student::getName() {
    return name;
}
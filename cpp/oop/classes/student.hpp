#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<string>

class student {
    private:
        std::string name;

    public:
        // constructor
        student (std::string name);

        // destructor
        ~student();

        // returns name
        std::string getName();
};

#endif 
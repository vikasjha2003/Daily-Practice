#include <iostream>
#include <optional>
#include <string>

using namespace std;

// optional is a type of container in cpp which may have a value or which may not have a value

string get1(const string& key);
// what if there is nothing to return at all?? traditionally we will return ""
//  but what if "" is also a valid possible answer then what will we return ??
// Key doesn't exist  → ""
// Key exists         → ""

optional<string> get2(const string& key);

// optional solves this problem 

// key exists -> value
//                 └── "Vikas"

// key doesn't exist -> value
//                        └── nothing

// basically it returns a pointer which is nullptr in case key not found else it points to the memory address of that value.
 
// optional can be used as the return type of a factory that may fail
std::optional<std::string> create(bool b)
{
    if (b)
        return "Godzilla";
    return {};
}

// std::nullopt can be used to create any (empty) std::optional
auto create2(bool b)
{
    return b ? std::optional<std::string>{"Godzilla"} : std::nullopt;
}

int main()
{
    std::cout << "create(false) returned "
              << create(false).value_or("empty") << '\n';
    
    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = create2(true))
        std::cout << "create2(true) returned " << *str << '\n';
}

// nullopt -> null optional
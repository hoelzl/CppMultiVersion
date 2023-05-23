#include "cpp23_lib.h"
#include <iostream>

void say_hello_23(const std::string& name) {
    if (name.empty()) {
        throw std::domain_error("Name is empty!");
    }
    std::cout << "Hello " << name << " from C++23!" << std::endl;
}

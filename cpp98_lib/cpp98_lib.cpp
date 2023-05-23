#include "cpp98_lib.h"
#include <iostream>
#include <stdexcept>

const std::string default_name = "world";

// Note: Don't expose the exception specification in the header,
// since it has been removed from C++20.
void say_hello_98_internal(const std::string &name) throw(std::domain_error) {
    if (name.empty()) {
        throw std::domain_error("Name is empty!");
    }
    std::cout << "Hello " << name << " from C++98!" << std::endl;
}

void say_hello_98(const std::string &name) {
    say_hello_98_internal(name);
}
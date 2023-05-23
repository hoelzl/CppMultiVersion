#include <iostream>
#include "cpp98_lib/cpp98_lib.h"
#include "cpp23_lib/cpp23_lib.h"

int main() {
    std::cout << "Hello world from main!" << std::endl;
    say_hello_98();
    try {
        say_hello_98("");
    } catch (const std::domain_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    say_hello_23();
    say_hello_23(default_name);
    try {
        say_hello_23("");
    } catch (const std::domain_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

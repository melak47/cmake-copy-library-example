#include <hello/hello.hpp>
#include <hello/secret.hpp>

#include <iostream>

namespace hello {
    void HELLO_EXPORT say_hello() {
        std::cout << "hello, world!\n";
    }
}

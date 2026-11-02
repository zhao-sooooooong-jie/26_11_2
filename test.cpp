#include <iostream>
void f()
{
    std::cout << "f() is called\n" << std::endl;
}


int i = 1;


int main() {
    f();
    i = 4;
    std::cout << "Hello world!\n" << std::endl;

    return 0;
}
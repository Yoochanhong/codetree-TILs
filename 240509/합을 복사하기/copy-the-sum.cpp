#include <iostream>

int main() {
    int a = 1, b = 2, c = 3;
    a = b = c = a + b+ c;
    std::cout <<a << " " << b << " " << c;
    return 0;
}
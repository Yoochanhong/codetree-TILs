#include <iostream>

int main() {
    int a = 5, b = 6, c = 7;
    a = b = c;
    std::cout << a << " " << b << " " << c;
    return 0;
}
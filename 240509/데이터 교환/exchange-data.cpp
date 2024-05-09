#include <iostream>

int main() {
    int a = 5, b = 6, c = 7;
    int temp = b;
    b = a;
    a = c;
    c = temp;
    std::cout << a << "\n" << b << "\n" << c;
    return 0;
}
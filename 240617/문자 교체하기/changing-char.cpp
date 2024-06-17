#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    b[0] = a[0];
    b[1] = a[1];
    std::cout << b;
    return 0;
}
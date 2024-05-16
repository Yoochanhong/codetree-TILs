#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << ((a + b == b + a) ? "true" : "false");
    return 0;
}
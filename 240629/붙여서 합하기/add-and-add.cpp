#include <iostream>

int f(std::string a, std::string b) {
    return std::stoi(a + b);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << f(a, b) + f(b, a);
    return 0;
}
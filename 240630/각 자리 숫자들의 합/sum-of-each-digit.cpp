#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    int b = 0;
    for (auto i : a) {
        b += i - 48;
    }
    std::cout << b;
    return 0;
}
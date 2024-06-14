#include <iostream>

int main() {
    int n;
    std::string a, b;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        b += a;
    }
    std::cout << b;
    return 0;
}
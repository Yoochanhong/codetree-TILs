#include <iostream>

int main() {
    std::string a;
    for (int i = 0; i < 10; i++) {
        std::cin >> a;
        if (i % 2 == 0) std::cout << a << "\n";
    }
    return 0;
}
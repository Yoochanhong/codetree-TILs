#include <iostream>

int main() {
    std::string a[4];
    for (int i = 3; i >= 0; i--) {
        std::cin >> a[i];
    }
    for (int i = 0; i < 4; i++) {
        std::cout << a[i] << "\n";
    }
    return 0;
}
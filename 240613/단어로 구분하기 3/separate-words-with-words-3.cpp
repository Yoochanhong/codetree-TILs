#include <iostream>

int main() {
    std::string a[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    for (int i = 9; i >= 0; i--) {
        std::cout << a[i] << "\n";
    }
    return 0;
}
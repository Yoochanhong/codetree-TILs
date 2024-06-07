#include <iostream>

int main() {
    char a[11];
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    for (int i = 9; i >= 0; i--) {
        std::cout << a[i];
    }
    return 0;
}
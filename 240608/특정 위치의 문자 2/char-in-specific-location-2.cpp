#include <iostream>

int main() {
    for (char i = 0, j; i < 10; i++) {
        std::cin >> j;
        if (i == 1 || i == 4 || i == 7) std::cout << j << " ";
    }
    return 0;
}
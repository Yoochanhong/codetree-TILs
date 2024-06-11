#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            char a;
            std::cin >> a;
            std::cout << (char) (a - 32) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
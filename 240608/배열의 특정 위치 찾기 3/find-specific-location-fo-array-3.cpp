#include <iostream>

int main() {
    for (int i = 0, a, s = 0; i < 100; i++) {
        std::cin >> a;
        if (!a) {
            std::cout << s;
            break;
        }
        s += a;
    }
    return 0;
}
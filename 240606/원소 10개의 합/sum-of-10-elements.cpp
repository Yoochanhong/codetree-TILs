#include <iostream>

int main() {
    int s = 0;
    for (int i = 0, a; i < 10; i++) {
        std::cin >> a;
        s += a;
    }
    std::cout << s;
    return 0;
}
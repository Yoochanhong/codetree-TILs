#include <iostream>

int main() {
    int s = 0;
    for (int i = 1, a; i <= 10; i++) {
        std::cin >> a;
        if (i == 3 || i == 5 || i == 10) s += a;
    }
    std::cout << s;
    return 0;
}
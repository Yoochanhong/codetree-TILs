#include <iostream>

int main() {
    int s = 0, s1 = 0;
    for (int i = 0, j; i < 10; i++) {
        std::cin >> j;
        if (i & 1) s += j;
        else s1 += j;
    }
    std::cout << (std::max(s, s1) - std::min(s, s1));
    return 0;
}
#include <iostream>

int main() {
    int a, b, c = 0;
    std::cin >> a >> b;
    for (int i = std::min(a, b); i <= std::max(a, b); i++) {
        if (i % 5 == 0) c += i;
    }
    std::cout << c;
    return 0;
}
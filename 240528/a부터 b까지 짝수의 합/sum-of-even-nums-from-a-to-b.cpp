#include <iostream>

int main() {
    int a, b, c = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) c += i;
    }
    std::cout << c;
    return 0;
}
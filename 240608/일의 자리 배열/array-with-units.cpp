#include <iostream>

int main() {
    int a, b, c[10];
    std::cin >> a >> b;
    c[0] = a;
    c[1] = b;
    for (int i = 2; i < 10; i++) {
        c[i] = c[i - 1] + c[i - 2];
        c[i] %= 10;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << c[i] << " ";
    }
    return 0;
}
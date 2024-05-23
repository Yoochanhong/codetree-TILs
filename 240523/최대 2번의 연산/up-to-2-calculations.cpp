#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if (a % 2 == 0) a /= 2;
    if (a % 2) a = (a + 1) / 2;
    std::cout << a;
    return 0;
}
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if (a % 2) a += 3;
    if (a % 3 == 0) a /= 3;
    std::cout << a;
    return 0;
}
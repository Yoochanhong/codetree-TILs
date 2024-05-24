#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if (a == 5) std::cout << 'A';
    else if (a % 2 == 0) std::cout << 'B';
    return 0;
}
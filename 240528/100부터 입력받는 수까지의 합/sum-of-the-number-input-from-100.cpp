#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = n; i <= 100; i++) c += i;
    std::cout << c;
    return 0;
}
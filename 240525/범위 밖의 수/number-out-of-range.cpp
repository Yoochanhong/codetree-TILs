#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a < 10 || a > 20 ? "yes" : "no");
    return 0;
}
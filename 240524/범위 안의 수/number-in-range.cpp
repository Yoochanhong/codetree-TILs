#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a > 9 && a < 21 ? "yes" : "no");
    return 0;
}
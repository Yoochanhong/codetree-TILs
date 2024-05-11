#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a % 3 ? "NO" : "YES") << "\n";
    std::cout << (a % 5 ? "NO" : "YES");
    return 0;
}
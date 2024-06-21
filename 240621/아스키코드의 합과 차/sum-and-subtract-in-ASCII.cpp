#include <iostream>

int main() {
    char a, b;
    std::cin >> a >> b;
    std::cout << a + b << " " << std::max(a, b) - std::min(a, b);
    return 0;
}
#include <iostream>

int main() {
    char a;
    std::cin >> a;
    std::cout << (char)(a == 97 ? 122 : a - 1);
    return 0;
}
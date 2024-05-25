#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a % 13 == 0 || a % 19 == 0 ? "True" : "False");
    return 0;
}
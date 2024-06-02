#include <iostream>

int main() {
    int y;
    std::cin >> y;
    std::cout << (y % 4 == 0 || !(y % 100 == 0 && y % 400) ? "true" : "false");
    return 0;
}
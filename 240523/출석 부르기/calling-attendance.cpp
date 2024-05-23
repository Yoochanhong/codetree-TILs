#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a == 1 ? "John" : a == 2 ? "Tom" : "Paul");
    return 0;
}
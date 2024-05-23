#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a == 1 ? "John" : a == 2 ? "Tom" : a == 3 ? "Paul" : "Vacancy");
    return 0;
}
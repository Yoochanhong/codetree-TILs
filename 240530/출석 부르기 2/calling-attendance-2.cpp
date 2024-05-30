#include <iostream>

int main() {
    int n;
    while(std::cin >> n) {
        if (n > 4) break;
        std::cout << (n == 1 ? "John" : n == 2 ? "Tom" : n == 3 ? "Paul" : "Sam") << "\n";
    }
    std::cout << "Vacancy";
    return 0;
}
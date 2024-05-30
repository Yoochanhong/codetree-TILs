#include <iostream>

int main() {
    int n;
    while(std::cin >> n) {
        if (!n) break;
        std::cout << n << "\n";
    }
    return 0;
}
#include <iostream>

int main() {
    int n, c = 0;
    while(std::cin >> n) {
        if (n % 2 || c > 3) continue;
        std::cout << n / 2 << '\n';
        c++;
    }
    return 0;
}
#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 && i % 3 && i % 5) c++;
    }
    std::cout << c;
    return 0;
}
#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 && i % 10 != 5 && !(i % 3 == 0 && i % 9)) std::cout << i << " ";
    }
    return 0;
}
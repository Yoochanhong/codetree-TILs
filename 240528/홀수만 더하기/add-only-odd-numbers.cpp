#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        if (a % 2 && a % 3 == 0) c += a;
    }
    std::cout << c;
    return 0;
}
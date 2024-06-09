#include <iostream>

int main() {
    int n, m, c = 0;
    std::cin >> n >> m;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        if (a == m) c++;
    }
    std::cout << c;
    return 0;
}
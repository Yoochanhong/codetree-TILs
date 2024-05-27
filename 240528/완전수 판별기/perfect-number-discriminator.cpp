#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) c += i;
    }
    std::cout << (n == c ? "P" : "N");
    return 0;
}
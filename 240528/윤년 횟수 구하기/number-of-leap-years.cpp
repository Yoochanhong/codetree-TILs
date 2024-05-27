#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 4 || i % 100 == 0 && i % 400) c++;
    }
    std::cout << n - c;
    return 0;
}
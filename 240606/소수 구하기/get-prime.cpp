#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) prime = false;
        }
        if (prime) std::cout << i << " ";
    }
    return 0;
}
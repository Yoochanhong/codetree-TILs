#include <iostream>

int main() {
    int n, i = 1;
    std::cin >> n;
    while(n > 1) {
        n /= ++i;
    }
    std::cout << i;
    return 0;
}
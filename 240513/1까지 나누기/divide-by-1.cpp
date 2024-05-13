#include <iostream>

int main() {
    int n, i = 0;
    std::cin >> n;
    while(n > 0) n /= ++i;
    std::cout << i;
    return 0;
}
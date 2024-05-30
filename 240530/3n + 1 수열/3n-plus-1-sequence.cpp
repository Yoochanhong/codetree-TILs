#include <iostream>

int main() {
    int n, c = 0;
    std::cin >> n;
    while(n > 1) n = (n % 2 ? n * 3 + 1 : n / 2), c++;
    std::cout << c;
    return 0;
}
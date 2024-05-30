#include <iostream>

int main() {
    int n, c = 1, d = 0;
    std::cin >> n;
    while(n != c) c *= 2, d++;
    std::cout << d;
    return 0;
}
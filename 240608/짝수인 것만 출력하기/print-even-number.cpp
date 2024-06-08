#include <iostream>

int main() {
    int n, a;
    std::cin >> n;
    while(n--) {
        std::cin >> a;
        if (~a & 1) std::cout << a << " ";
    }
    return 0;
}
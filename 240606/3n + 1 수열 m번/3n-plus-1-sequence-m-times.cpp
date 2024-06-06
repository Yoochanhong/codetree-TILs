#include <iostream>

int main() {
    int t, n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        int c = 0;
        while(n != 1) {
            n = n & 1 ? 3 * n + 1 : n / 2;
            c++;
        }
        std::cout << c << "\n";
    }
    return 0;
}
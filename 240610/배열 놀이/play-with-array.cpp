#include <iostream>

int main() {
    int n, q, a[101], b, c, d;
    std::cin >> n >> q;
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    while(q--) {
        std::cin >> b >> c;
        if (b == 1) std::cout << a[c] << "\n";
        if (b == 2) {
            int e = 0;
            for (int i = 1; i <= n; i++) {
                if (a[i] == c) {
                    e = i;
                    break;
                }
            }
            std::cout << e << "\n";
        }
        if (b == 3) {
            std::cin >> d;
            for (int i = c; i <= d; i++) {
                std::cout << a[i] << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}
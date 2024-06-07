#include <iostream>

int main() {
    for (int i = 0, a, s = 0, k = 0; i < 11; i++) {
        std::cin >> a;
        if (!a || i == 10) {
            std::cout << k << " " << s;
            break;
        } else s += ~a & 1 ? a : 0, k += ~a & 1;
    }
    return 0;
}
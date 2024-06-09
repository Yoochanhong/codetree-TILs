#include <iostream>

int main() {
    int a[101];
    for (int i = 0; i < 100; i++) {
        std::cin >> a[i];
        if (!a[i]) break;
    }
    for (int i = 0; a[i]; i++) {
        std::cout << (a[i] & 1 ? a[i] + 3 : a[i] / 2) << ' ';
    }
    return 0;
}
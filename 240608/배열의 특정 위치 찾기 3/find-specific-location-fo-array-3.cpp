#include <iostream>

int main() {
    int a[101];
    for (int i = 0; i < 100; i++) {
        std::cin >> a[i];
        if (!a[i]) {
            std::cout << a[i - 1] + a[i - 2] + a[i - 3];
            break;
        }
    }
    return 0;
}
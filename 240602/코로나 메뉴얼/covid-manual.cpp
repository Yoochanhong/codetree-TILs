#include <iostream>

int main() {
    int a[3], c = 0;
    char b[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> b[i] >> a[i];
        if (b[i] == 'Y' && a[i] > 36) c++;
    }
    std::cout << (c > 1 ? 'E' : 'N');
    return 0;
}
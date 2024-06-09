#include <iostream>

int main() {
    int c[4] = {};
    for (int i = 0, j; i < 3; i++) {
        char a;
        std::cin >> a >> j;
        if (a == 'Y' && j > 36) c[0]++;
        else if (a == 'N' && j > 36) c[1]++;
        else if (a == 'Y' && j < 37) c[2]++;
        else c[3]++;
    }
    for (int i = 0; i < 4; i++) {
        std::cout << c[i] << " ";
    }
    if (c[0] > 1) std::cout << 'E';
    return 0;
}
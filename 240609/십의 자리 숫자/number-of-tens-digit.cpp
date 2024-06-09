#include <iostream>

int main() {
    int c[10] = {};
    for (int i = 0, a; i < 100; i++) {
        std::cin >> a;
        if (!a) break;
        c[a/10]++;
    }
    for (int i = 1; i < 10; i++) {
        std::cout << i << " - " << c[i] << "\n"; 
    }
    return 0;
}
#include <iostream>

int main() {
    int c1 = 0, c2 = 0;
    for (int i = 0, a; i < 10; i++){
        std::cin >> a;
        if (a % 3 == 0) c1++;
        if (a % 5 == 0) c2++;
    }
    std::cout << c1 << " " << c2;
    return 0;
}
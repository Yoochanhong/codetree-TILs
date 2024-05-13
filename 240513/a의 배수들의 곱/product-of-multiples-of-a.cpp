#include <iostream>

int main() {
    int a, b, c = 1;
    std::cin >> a >> b;
    for (int i = 1; i <= b; i++){
        if (i % a == 0) c *= i;
    }
    std::cout << c;
    return 0;
}
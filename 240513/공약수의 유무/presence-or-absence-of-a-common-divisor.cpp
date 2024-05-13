#include <iostream>

int main() {
    int a, b, c = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (1920 % i == 0 && 2880 % i == 0) c = 1;
    }
    std::cout << c;
    return 0;
}
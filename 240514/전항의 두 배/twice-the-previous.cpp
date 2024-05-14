#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << " ";
    for (int i = 0; i < 8; i++){
        std::cout << a * 2 + b << " ";
        int temp = a * 2 + b;
        a = b;
        b = temp;
    }
    return 0;
}
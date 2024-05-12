#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a > 0){
        for (int i= 0; i < b; i++) std::cout << a;
    } else std::cout << "0";
    return 0;
}
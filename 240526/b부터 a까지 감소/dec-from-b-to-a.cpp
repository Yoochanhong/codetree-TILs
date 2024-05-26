#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    for (int i = b; i >= a; i--){
        std::cout << i << " ";
    }
    return 0;
}
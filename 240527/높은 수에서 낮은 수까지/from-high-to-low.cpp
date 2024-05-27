#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    for (int i = std::max(a, b); i >= std::min(a, b); i--){
        std::cout << i << " ";
    }
    return 0;
}
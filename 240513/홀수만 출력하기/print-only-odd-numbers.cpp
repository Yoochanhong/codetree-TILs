#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, a; i < n; i++){
        std::cin >> a;
        if (a % 3 == 0 && a % 2) std::cout << a << "\n";
    }
    return 0;
}
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < i; k++){
                   std::cout << "*";
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
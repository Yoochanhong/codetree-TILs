#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            std::cout << "*";
        }
        for (int j = 0; j < i * 2; j++){
            std::cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
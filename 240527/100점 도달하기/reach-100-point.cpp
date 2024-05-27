#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i <= 100; i++){
        if (i >= 90) std::cout << "A ";
        else if (i >= 80) std::cout << "B ";
        else if (i >= 70) std::cout << "C ";
        else if (i >= 60) std::cout << "D ";
        else std::cout << "F ";
    }
    return 0;
}
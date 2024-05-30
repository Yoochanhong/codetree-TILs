#include <iostream>

int main() {
    int n;
    while(std::cin >> n) {
        if (n < 25) std::cout << "Higher\n";
        else if (n > 25) std::cout << "Lower\n";
        else break;
    }
    std::cout << "Good";
    return 0;
}
#include <iostream>

int main() {
    char a;
    std::cin >> a;
    if (a == 'S') std::cout << "Superior";
    else if (a == 'A') std::cout << "Excellent";
    else if (a == 'B') std::cout << "Good";
    else if (a == 'C') std::cout << "Usually";
    else if (a == 'D') std::cout << "Effort";
    else std::cout << "Failure";
    return 0;
}
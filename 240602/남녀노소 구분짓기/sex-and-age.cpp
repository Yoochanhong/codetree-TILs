#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (a ? b > 18 ? "WOMAN" : "GIRL" : b > 18 ? "MAN" : "BOY");
    return 0;
}
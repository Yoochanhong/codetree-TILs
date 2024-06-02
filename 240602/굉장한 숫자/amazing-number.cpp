#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << ((n % 2 && n % 3 == 0) || (n % 2 == 0  && n % 5 == 0)? "true" : "false");
    return 0;
}
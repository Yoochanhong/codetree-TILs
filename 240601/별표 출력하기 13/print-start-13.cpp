#include <iostream>

using namespace std;
int main() {
    int n;
    std::cin >> n;
    for (int i = n, j = 1; j <= n; i--, j++) {
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";
        }
        std::cout << "\n";
        for (int k = 1; k <= j; k++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}
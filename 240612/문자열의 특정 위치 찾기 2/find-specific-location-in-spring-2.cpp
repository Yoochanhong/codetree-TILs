#include <iostream>

int main() {
    std::string a[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char b;
    int c = 0;
    std::cin >> b;
    for (int i = 0; i < 5; i++) {
        if (a[i][2] == b || a[i][3] == b) {
            std::cout << a[i] << "\n";
            c++;
        }
    }
    std::cout << c;
    return 0;
}
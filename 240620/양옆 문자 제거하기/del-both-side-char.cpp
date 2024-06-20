#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (i == 1 || i == a.size() - 2) continue;
        std::cout << a[i];
    }
    return 0;
}
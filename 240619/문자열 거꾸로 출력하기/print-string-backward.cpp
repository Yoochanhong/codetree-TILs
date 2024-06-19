#include <iostream>
#include <string>

int main() {
    while(true) {
        std::string a;
        std::cin >> a;
        if (a == "END") break;
        for (int i = a.size() - 1; i >= 0; i--) std::cout << a[i];
        std::cout << "\n";
    }
    return 0;
}
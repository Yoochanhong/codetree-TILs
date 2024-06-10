#include <iostream>

int main() {
    for (int i = 0; i < 4; i++) {
        int s = 0;
        for (int j = 0, c; j < 4; j++) {
            std::cin >> c;
            s += c;
        }
        std::cout << s << "\n";
    }
    return 0;
}
#include <iostream>

int main() {
    char a, s[] = "LEBROS ";
    std::cin >> a;
    for (int i = 0; s[i]; i++) {
        if (s[i] == a) {
            std::cout << i;
            break;
        }
        if (s[i] == ' ') std::cout << "None";
    }
    return 0;
}
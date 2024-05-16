#include <iostream>

int main() {
    std::string a, b;
    int c = 0;
    std::cin >> a >> b;
    for (int i = 0; i < a.length() - 1; i++){
        if (a[i] == b[0] && a[i + 1] == b[1]) c++;
    }
    std::cout << c;
    return 0;
}
#include <iostream>
#include <string>

int main() {
    int c = 0;
    std::string a;
    getline(std::cin, a);
    char b;
    std::cin >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b) c++;
    }
    std::cout << c;
    return 0;
}
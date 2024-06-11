#include <iostream>
#include <string>
int main() {
    std::string a;
    getline(std::cin, a);
    for (int i = 2; i < 10; i++) {
        std::cout << a[i];
    }
    return 0;
}
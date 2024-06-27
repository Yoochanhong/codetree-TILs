#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    for (int i = 1; i < a.size(); i++) std::cout << a[i];
    std::cout << a.front();
    return 0;
}
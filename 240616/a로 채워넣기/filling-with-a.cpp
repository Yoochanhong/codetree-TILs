#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    a[1] = 'a';
    a[a.size() - 2] = 'a';
    std::cout << a;
    return 0;
}
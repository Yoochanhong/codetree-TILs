#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    if (a.size() > b.size()) std::cout << a << " " << a.size();
    else std::cout << b << " " << b.size();
    return 0;
}
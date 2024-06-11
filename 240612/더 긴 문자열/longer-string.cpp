#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    if (a.size() > b.size()) std::cout << a << " " << a.size();
    else if (a.size() < b.size()) std::cout << b << " " << b.size();
    else std::cout << "same";
    return 0;
}
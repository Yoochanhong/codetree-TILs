#include <iostream>

int main() {
    int d = 21, e = 0;
    std::string a, b, c;
    std::cin >> a >> b >> c;
    if (d > a.size()) d = a.size();
    if (e < a.size()) e = a.size();
    if (d > b.size()) d = b.size();
    if (e < b.size()) e = b.size();
    if (d > c.size()) d = c.size();
    if (e < c.size()) e = c.size();
    std::cout << e - d;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    std::string a;
    std::cin >> a;
    for (auto &i : a) {
        if (i >= 65 && i <= 90) i += 32;
        if ((i >= 48 && i <= 57) || (i >= 97 && i <= 122)) std::cout << i;
    }
    return 0;
}
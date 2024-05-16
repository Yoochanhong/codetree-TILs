#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    for (int i = a.length() - 1; i >= 0; i -= 2){
        std::cout << a[i];
    }
    return 0;
}
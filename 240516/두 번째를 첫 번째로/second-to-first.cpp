#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    char b = a[1];
    for (int i = 0; i < a.length(); i++){
        if (a[i] == b) a[i] = a[0];
    }
    std::cout << a;
    return 0;
}
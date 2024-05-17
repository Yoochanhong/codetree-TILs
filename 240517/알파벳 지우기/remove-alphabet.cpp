#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    int c = 0, d = 0;
    for (char i : a){
        if (i < 65) c = c * 10 + i - 48;
    }
    for (char i : b){
        if (i < 65) d = d * 10 + i - 48;
    }
    std::cout << c + d;
    return 0;
}
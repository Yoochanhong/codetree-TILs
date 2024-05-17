#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    for (char &i : s){
        if (i < 97) i += 32;
        else i -= 32;
    }
    std::cout << s;
    return 0;
}